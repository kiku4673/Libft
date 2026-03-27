/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:21:28 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/21 20:00:45 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char str[10] = "abcdefghi";

	printf("Before: %s\n", str);
	ft_memset(str + 2, 'X', 3);
	printf("Afetr : %s\n", str);

	char str2[10] = "abcdefghi";
	memset(str2 + 2, 'X', 3);
	printf("Stdlib: %s\n", str2);

	return (0);
}
*/