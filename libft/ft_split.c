/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:25:19 by kyamanak          #+#    #+#             */
/*   Updated: 2026/02/11 15:33:11 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	next_len(const char	*s, char c, int *i)
{
	int	len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	len = 0;
	while (s[*i + len] && s[*i + len] != c)
		len++;
	return (len);
}

static void	ft_free(char **arr)
{
	int	i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**ft_fail(char **res)
{
	ft_free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		len;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	res = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		len = next_len(s, c, &i);
		if (len > 0)
		{
			res[k] = ft_substr(s, i, (size_t)len);
			if (!res[k++])
				return (ft_fail(res));
			i += len;
		}
	}
	res[k] = NULL;
	return (res);
}
