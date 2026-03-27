/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:32:36 by kyamanak          #+#    #+#             */
/*   Updated: 2026/02/11 15:12:27 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main(void)
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('B', 2);
	ft_putchar_fd('\n', 2);
}
*/