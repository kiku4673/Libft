/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 22:31:15 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 18:46:32 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
int	main(void)
{
	char *a = ft_strtrim("  42 Tokyo  ", " ");
	char *b = ft_strtrim("--hello--", "-");
	char *c = ft_strtrim("abc42abc", "abc");
	char *d = ft_strtrim("xxxxx", "x");
	char *e = ft_strtrim("", " ");
	char *f = ft_strtrim("no trim", "");

	printf("'%s'\n", a); // '42 Tokyo'
	printf("'%s'\n", b); // 'hello'
	printf("'%s'\n", c); // '42'
	printf("'%s'\n", d); // ''
	printf("'%s'\n", e); // ''
	printf("'%s'\n", f); // 'no trim'

	free(a); free(b); free(c); free(d); free(e); free(f);
}
*/