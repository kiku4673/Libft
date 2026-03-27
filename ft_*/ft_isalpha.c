/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:17:43 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/16 23:34:32 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
int ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
/*
int main(void)
{
	int c;

	c = 'a';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));

	c = '0';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));

	c = ';';
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));

	c = 90; // 'Z'
	printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));

	return (0);
}
*/