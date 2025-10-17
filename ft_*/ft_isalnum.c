/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:19:19 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/16 23:37:34 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));	
}
/*
int main(void)
{
	char test[] = {'a', 'Z', '5', '#', ' ', '\n', 0};
	int i = 0;

	while (test[i])
	{
		printf("ft_isalnum('%c') = %d\n", test[i], ft_isalnum(test[i]));
		i++;
	}
	return (0);
}
*/