/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:02:30 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 20:21:15 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[10] = "abcdefhgi";
	ft_bzero(str + 2, 3);

	for (int i = 0; i < 9; i++)
		printf("[%c]", str[i] ? str[i] : '0');
	printf("\n");
}
*/