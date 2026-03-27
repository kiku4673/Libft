/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 21:46:05 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:20:07 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void to_upper_inplace(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void add_index(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char str1[] = "hello";
	char str2[] = "abcd";

	ft_striteri(str1, to_upper_inplace);
	ft_striteri(str2, add_index);

	printf("%s\n", str1); // "HELLO"
	printf("%s\n", str2); // "aceg"
}
*/