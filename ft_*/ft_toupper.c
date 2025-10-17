/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:49:51 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/17 22:08:11 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main(void)
{
	char test[] = {'a', 'z', 'A', 'Z', '5', '#', ' ', '\n', 0};
	int i = 0;

	while (test[i])
	{
		printf("ft_toupper('%c') = '%c' (%d)\n",
			test[i], ft_toupper(test[i]), ft_toupper(test[i]));
		i++;
	}
	return (0);
}
*/