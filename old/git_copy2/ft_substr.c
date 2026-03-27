/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:02:22 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:20:34 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int main(void)
{
	char *s1 = ft_substr("abcdef", 2, 3);
	char *s2 = ft_substr("abcdef", 0, 10);
	char *s3 = ft_substr("abcdef", 10, 2);

	printf("%s\n", s1); // cde
	printf("%s\n", s2); // abcdef
	printf("%s\n", s3); // ""
	free(s1); free(s2); free(s3);
}
*/