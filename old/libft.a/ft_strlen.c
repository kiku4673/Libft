/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:50:26 by kyamanak          #+#    #+#             */
/*   Updated: 2025/11/05 18:48:39 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

int main(void)
{
	printf("%ld\n", ft_strlen(NULL));         // → 5
	printf("%ld\n", ft_strlen(""));              // → 0
	printf("%ld\n", ft_strlen("42Tokyo!"));      // → 8
	return (0);
}
