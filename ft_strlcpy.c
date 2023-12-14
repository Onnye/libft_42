/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:37:23 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 13:07:03 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
    const char *test_src = "Hello, World!";
    char test_dst[20];
    size_t result = ft_strlcpy(test_dst, test_src, sizeof(test_dst));

    printf("ft_strlcpy(dst, \"%s\", %zu) 
	= %zu\n", test_src, sizeof(test_dst), result);
    printf("dst après ft_strlcpy: \"%s\"\n", test_dst);
    return (0);
}
*/