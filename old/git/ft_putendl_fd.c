/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:24:26 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:20:21 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main(void)
{
	ft_putendl_fd("Hello, 42Tokyo!", 1);
	ft_putendl_fd("This is Libft Part 2", 1);
	ft_putendl_fd("Error: something went wrong", 2);
	ft_putendl_fd(NULL, 1);
}
*/