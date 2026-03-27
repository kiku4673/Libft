/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:52:25 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:14:13 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
void test(const char *big, const char *little, size_t len)
{
	char *r1 = strnstr(big, little, len);
	char *r2 = ft_strnstr(big, little, len);
	printf("big: \"%s\" | little: \"%s\" | len: %zu\n", big, little, len);
	printf("strnstr   : %s\n", r1 ? r1 : "NULL");
	printf("ft_strnstr: %s\n", r2 ? r2 : "NULL");
	printf("→ %s\n\n", (r1 == r2 || (r1 && r2 && strcmp(r1, r2) == 0)) ? 
			"✅ OK" : "❌ Mismatch");
}

int main(void)
{
	test("hello world", "world", 11);
	test("hello world", "world", 5);
	test("hello", "lo", 5);
	test("hello", "", 5);
	test("12345", "34", 4);
	test("abcd", "z", 4);
}
*/