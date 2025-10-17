/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:10:54 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/16 23:34:27 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
	return(c >= '0' && '9');
}
/*
int main(void)
{
	char test[] = {'0', '5', '9', 'a', 'Z', ' ', '-', '\n', 0};
	int i = 0;

	while (test[i])
	{
		printf("ft_isdigit('%c') = %d\n", test[i], ft_isdigit(test[i]));
		i++;
	}
	return (0);
}
*/