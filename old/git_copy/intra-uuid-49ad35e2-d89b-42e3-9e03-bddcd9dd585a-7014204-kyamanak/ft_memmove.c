/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:54:14 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 19:03:14 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[20] = "abcdef";
	char str2[20] = "abcdef";
	
	memmove(str1 + 2, str1, 4);
	ft_memmove(str2 + 2, str2, 4);
	
	printf("memmove : %s\n", str1);
	printf("ft_memmove : %s\n", str2);
}
*/