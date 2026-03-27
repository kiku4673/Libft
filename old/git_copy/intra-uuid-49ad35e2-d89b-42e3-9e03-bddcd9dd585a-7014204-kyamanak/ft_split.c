/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:25:19 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 20:54:24 by kyamanak         ###   ########.fr       */
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
/*
static void	print_split(char **arr)
{
	int	i = 0;

	if (!arr)
	{
		printf("(null)\n");
		return;
	}
	while (arr[i])
	{
		printf("[%s]", arr[i]);
		if (arr[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
}

int	main(void)
{
	char	**res;

	printf("1️⃣ 通常の分割\n");
	res = ft_split("hello world 42 tokyo", ' ');
	print_split(res);
	ft_free(res);

	printf("\n2️⃣ 区切りが連続している場合\n");
	res = ft_split(",,,a,,b,c,,", ',');
	print_split(res);
	ft_free(res);

	printf("\n3️⃣ 先頭と末尾が区切りの場合\n");
	res = ft_split("  split this please  ", ' ');
	print_split(res);
	ft_free(res);

	printf("\n4️⃣ 区切りが存在しない場合\n");
	res = ft_split("nospacehere", ' ');
	print_split(res);
	ft_free(res);

	printf("\n5️⃣ 空文字列\n");
	res = ft_split("", ' ');
	print_split(res);
	ft_free(res);

	printf("\n6️⃣ 区切りのみの文字列\n");
	res = ft_split(",,,,,", ',');
	print_split(res);
	ft_free(res);

	printf("\n7️⃣ NULL引数\n");
	res = ft_split(NULL, ' ');
	print_split(res);
	ft_free(res);

	printf("\n8️⃣ 特殊文字（タブ・改行）\n");
	res = ft_split("one\ttwo\nthree four", ' ');
	print_split(res);
	ft_free(res);

	printf("\n✅ テスト完了！\n");
	return (0);
}
*/