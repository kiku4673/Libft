/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:46:51 by kyamanak          #+#    #+#             */
/*   Updated: 2026/02/11 15:37:00 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	dst = (char *)malloc(len + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = f((unsigned int)i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
