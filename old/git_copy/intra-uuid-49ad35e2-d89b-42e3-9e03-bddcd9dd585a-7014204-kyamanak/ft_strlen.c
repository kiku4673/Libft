/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:50:26 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 23:20:00 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*
int main(void)
{
	printf("%d\n", ft_strlen("Hello"));         // → 5
	printf("%d\n", ft_strlen(""));              // → 0
	printf("%d\n", ft_strlen("42Tokyo!"));      // → 8
	return (0);
}
*/