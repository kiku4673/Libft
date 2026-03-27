/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:04:22 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 19:44:48 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char	str[] = "Hello world!";
	char	*res;

	res = ft_memchr(str, 'o', sizeof(str));
	if (res)
	{
		ptrdiff_t pos = res - str;
		printf("Found: '%c' at position %td\n", *res, pos);
	}
	else
		printf("Not found\n");

	res = memchr(str, 'o', sizeof(str));
	if (res)
	{
		ptrdiff_t pos = res - str;
		printf("Found: '%c' at position %td\n", *res, pos);
	}
	else
		printf("Not found\n");

	return (0);
}
*/