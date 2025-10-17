/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:59:14 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/17 21:47:09 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	char test[] = {'a', 'Z', '5', '#', ' ', '\n', 0};
	int i = 0;

	while (test[i])
	{
		printf("ft_isprint('%c) = %d\n", test[i], ft_isprint(test[i]));
		i++;
	}
	return (0);
}
	*/