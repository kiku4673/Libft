/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:33:28 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:13:40 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
void test_strlcpy(const char *src, size_t size)
{
	char dst1[20];
	char dst2[20];
	size_t ret1;
	size_t ret2;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));
	dst1[sizeof(dst1) - 1] = '\0';
	dst2[sizeof(dst2) - 1] = '\0';

	ret1 = strlcpy(dst1, src, size);
	ret2 = ft_strlcpy(dst2, src, size);

	printf("src: \"%s\" | size: %zu\n", src, size);
	printf("strlcpy   → dst: \"%s\" | return: %zu\n", dst1, ret1);
	printf("ft_strlcpy → dst: \"%s\" | return: %zu\n", dst2, ret2);
	printf("→ %s\n\n", (ret1 == ret2 && strcmp(dst1, dst2) == 0) ? 
			"✅ OK" : "❌ Mismatch");
}

int main(void)
{
	test_strlcpy("hello", 10); // 普通のコピー
	test_strlcpy("hello", 4);  // 切り詰めコピー
	test_strlcpy("hello", 1);  // NUL だけ書く
	test_strlcpy("hello", 0);  // 何も書かない
	test_strlcpy("", 5);       // src が空
	test_strlcpy("libft", 6);  // ちょうどの長さ

	return (0);
}
*/