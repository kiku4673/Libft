/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:21:01 by kyamanak          #+#    #+#             */
/*   Updated: 2025/11/04 16:45:29 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[20] = "Hello World!";
	char dest1[20] = "XXXXXXXXXXXX";
	char dest2[20] = "XXXXXXXXXXXX";
	
	ft_memcpy(dest1, src, 5);
	memcpy(dest2, src, 5);
	
	printf("%s\n", src);
	printf("ft_memcpy : %s\n", dest1);
	printf("memcpy : %s\n", dest2);

	return(0);
}
*/