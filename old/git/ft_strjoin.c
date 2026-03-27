/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:22:15 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:20:45 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(str + len1, s2, len2 + 1);
	return (str);
}
/*
int main(void)
{
	char *s1 = ft_strjoin("Hello, ", "world!");
	char *s2 = ft_strjoin("", "42Tokyo");
	char *s3 = ft_strjoin("libft", "");

	printf("%s\n", s1); // Hello, world!
	printf("%s\n", s2); // 42Tokyo
	printf("%s\n", s3); // libft

	free(s1);
	free(s2);
	free(s3);
}
*/