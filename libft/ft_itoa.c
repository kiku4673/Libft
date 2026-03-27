/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:42:54 by kyamanak          #+#    #+#             */
/*   Updated: 2026/02/11 15:34:32 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_num(int sign, long num, int len)
{
	char	*str;

	str = (char *)ft_calloc(len + sign + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[len + sign - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long	num;
	long	tmp;
	int		sign;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	num = n;
	sign = 0;
	if (num < 0)
	{
		sign = 1;
		num = -num;
	}
	len = 0;
	tmp = num;
	while (tmp > 0)
	{
		tmp /= 10;
		len++;
	}
	return (ft_num(sign, num, len));
}
