/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:35:04 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 21:34:31 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
    char *str = "hello world";

    printf("%s\n", ft_strchr(str, 'e'));  // "ello world"
    printf("%s\n", ft_strchr(str, 'o'));  // "o world"
    printf("%s\n", ft_strchr(str, '\0')); // "" (終端)
    printf("%s\n", ft_strchr(str, 'z'));  // (null)
}
*/