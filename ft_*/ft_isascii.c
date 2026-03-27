/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:38:34 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/17 19:59:54 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main(void)
{
	int test[] = {0, 31, 32, 65, 127, 128, -1, 256};
	int i = 0;

	while (i < 8)
	{
		printf("ft_isascii(%d) = %d\n", test[i], ft_isascii(test[i]));
		i++;
	}
	return (0);
}
*/