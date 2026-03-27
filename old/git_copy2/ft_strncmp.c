/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:02:16 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/28 22:50:49 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
void test_strncmp(const char *s1, const char *s2, size_t n)
{
	int real = strncmp(s1, s2, n);
	int mine = ft_strncmp(s1, s2, n);

	printf("s1: \"%s\" | s2: \"%s\" | n: %zu\n", s1, s2, n);
	printf("strncmp : %d\n", real);
	printf("ft_strncmp : %d\n", mine);
	printf("→ %s\n\n", (real == mine) ? "✅ OK" : "❌ Mismatch");
}

int main(void)
{
	test_strncmp("abc", "abc", 3);     // 完全一致
	test_strncmp("abc", "abd", 3);     // 途中不一致
	test_strncmp("abc", "ab", 3);      // s2 が短い
	test_strncmp("ab", "abc", 3);      // s1 が短い
	test_strncmp("abc", "abcd", 4);    // n 長め
	test_strncmp("abcd", "abc", 4);    // 逆パターン
	test_strncmp("abc", "abc", 0);     // n = 0
	test_strncmp("a\0b", "a\0c", 3);   // ヌル文字を含む（strncmpは止まる）
	test_strncmp("", "", 1);           // 空文字

	return (0);
}
*/