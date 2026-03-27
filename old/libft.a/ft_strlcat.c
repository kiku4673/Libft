/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 23:29:59 by kyamanak          #+#    #+#             */
/*   Updated: 2025/11/05 20:05:37 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (i + dlen + 1 < size && src[i] != '\0')
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

static void test_one(const char *init_dst, const char *src, size_t size) {
    char d1[16], d2[16];
    size_t r1, r2;

    // 初期状態を揃える
    memset(d1, 0, sizeof d1);
    memset(d2, 0, sizeof d2);
    // init をコピー（安全に）
    for (size_t i = 0; i + 1 < sizeof d1 && init_dst[i]; ++i) {
        d1[i] = init_dst[i]; d2[i] = init_dst[i];
    }

    r1 = strlcat(d1, src, size);
    r2 = ft_strlcat(d2, src, size);

    printf("dst0:\"%s\" src:\"%s\" size:%zu\n", init_dst, src, size);
    printf("strlcat   → dst:\"%s\" | ret:%zu\n", d1, r1);
    printf("ft_strlcat→ dst:\"%s\" | ret:%zu\n", d2, r2);
    printf("→ %s\n\n", (r1 == r2 && strcmp(d1, d2) == 0) ? 
			"✅ OK" : "❌ Mismatch");
}

int main(void) {
    test_one("abc", "XYZ", 10);   // 余裕あり
    test_one("abc", "XYZ", 6);    // ちょうど入る
    test_one("abc", "XYZ", 5);    // 1文字切り捨て
    test_one("abcd", "ZZZ", 5);   // size <= dlen（結合せず）
    test_one("", "hello", 1);     // NULのみ
    test_one("", "hello", 0);     // 何もできない
    return 0;
}
