/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:46:12 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:10:25 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_fd("Hello, world!", 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Error message", 2);
	ft_putchar_fd('\n', 2);
}
*/