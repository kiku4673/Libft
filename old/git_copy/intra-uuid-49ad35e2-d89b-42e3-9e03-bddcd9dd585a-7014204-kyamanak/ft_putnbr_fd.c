/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:30:50 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:19:53 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}
/*
int main(void)
{
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
}
*/