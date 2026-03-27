/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:45:10 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 20:12:43 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char s1[] = "abcdef";
    char s2[] = "abcdeg";
    char s3[] = "abcdef";

    printf("memcmp(s1, s2, 6) = %d\n", memcmp(s1, s2, 6));
    printf("ft_memcmp(s1, s2, 6) = %d\n", ft_memcmp(s1, s2, 6));

    printf("memcmp(s1, s3, 6) = %d\n", memcmp(s1, s3, 6));
    printf("ft_memcmp(s1, s3, 6) = %d\n", ft_memcmp(s1, s3, 6));

    printf("memcmp(s1, s2, 0) = %d\n", memcmp(s1, s2, 0));
    printf("ft_memcmp(s1, s2, 0) = %d\n", ft_memcmp(s1, s2, 0));

    return 0;
}
*/