/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:38:23 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:23:46 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (nptr[i] != '\0' && (nptr[i] == 32
			|| (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
void test(const char *str)
{
	int r1 = atoi(str);
	int r2 = ft_atoi(str);

	printf("input: \"%s\"\n", str);
	printf("atoi     : %d\n", r1);
	printf("ft_atoi  : %d\n", r2);
	printf("→ %s\n\n", (r1 == r2) ? "✅ OK" : "❌ Mismatch");
}

int main(void)
{
	test("42");
	test("   -42");
	test("   +42");
	test(" +000123abc");
	test("--42");
	test("   \t\n\v\f\r42");
	test("abc");
	test("2147483647");    // int max
	test("-2147483648");   // int min
	test("9999999999999"); // overflow
	test("-9999999999999"); // underflow
}
*/