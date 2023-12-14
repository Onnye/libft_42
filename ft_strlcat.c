/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:39:26 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 13:10:29 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = 0;
	i = 0;
	while (dst_len < size && dst[dst_len] != '\0')
	{
		dst_len++;
	}
	if (dst_len < size)
	{
		while (src[i] != '\0' && dst_len + i < size - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + ft_strlen(src));
}

/*
#include <stdio.h>

int main(void)
{
    char test_dst[20] = "Hello, ";
    const char *test_src = "World!";
    size_t result = ft_strlcat(test_dst, test_src, sizeof(test_dst));

    printf("ft_strlcat(dst, \"%s\", %zu) = %zu\n", 
	test_src, sizeof(test_dst), result);
    printf("dst après ft_strlcat: \"%s\"\n", test_dst);

    return (0);
}
*/