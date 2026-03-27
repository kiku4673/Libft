/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:46:51 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/30 21:44:53 by kyamanak         ###   ########.fr       */
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
/*
static char to_upper_i(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static char shift_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c + 1);
	return (c);
}

int main(void)
{
	char *a = ft_strmapi("hello", to_upper_i);
	char *b = ft_strmapi("abcd",  shift_even);

	printf("%s\n%s\n", a, b);
	free(a); free(b);
	return 0;
}
*/