/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:16:19 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 20:00:01 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
void test(const char *src)
{
	char *r1 = strdup(src);
	char *r2 = ft_strdup(src);

	printf("src: \"%s\"\n", src);
	printf("strdup   : \"%s\"\n", r1);
	printf("ft_strdup: \"%s\"\n", r2);
	printf("→ %s\n\n", (strcmp(r1, r2) == 0) ? "✅ OK" : "❌ NG");

	free(r1);
	free(r2);
}

int main(void)
{
	test("hello");
	test("");
	test("42Tokyo!");
	test("libft test string");
}
*/