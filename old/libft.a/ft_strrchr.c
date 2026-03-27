/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:34:59 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 23:19:52 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
    char *s = "42Tokyo";

    printf("%s\n", ft_strrchr(s, 'o'));  // "o"
    printf("%s\n", ft_strrchr(s, 'T'));  // "Tokyo"
    printf("%s\n", ft_strrchr(s, '4'));  // "42Tokyo"
    printf("%s\n", ft_strrchr(s, '\0')); // "" (終端)
    printf("%s\n", ft_strrchr(s, 'z'));  // (null)
}
*/