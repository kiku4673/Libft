/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamanak <yamanak@student.42tokyo.jp>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:48:12 by kyamanak          #+#    #+#             */
/*   Updated: 2025/10/31 19:22:10 by kyamanak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nmemb * size;
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
int main(void)
{
	int *arr;
	int i;

	arr = ft_calloc(5, sizeof(int)); // int 5個分のメモリを確保
	if (!arr)
	{
		printf("メモリ確保に失敗しました\n");
		return (1);
	}

	printf("ft_callocで確保した配列の内容:\n");
	for (i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	free(arr); // メモリを解放
	return (0);
}
*/