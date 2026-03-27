/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:50:26 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/16 23:34:44 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/*
int main(void)
{
	printf("%d\n", ft_strlen("Hello"));         // → 5
	printf("%d\n", ft_strlen(""));              // → 0
	printf("%d\n", ft_strlen("42Tokyo!"));      // → 8
	printf("%d\n", ft_strlen("こんにちは"));    // ⚠️ 注意: マルチバイト文字の場合は結果が異なる
	return (0);
}
*/