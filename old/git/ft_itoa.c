/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:42:54 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 18:40:47 by kyamanak         ###   ########.fr       */
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
/*
static void run(int n){
    char *s = ft_itoa(n);
    printf("%d -> %s\n", n, s);
    free(s);
}

int main(void){
    run(0);
    run(7);
    run(42);
    run(-42);
    run(2147483647);
    run(-2147483648);
}
*/