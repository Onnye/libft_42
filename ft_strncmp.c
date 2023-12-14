/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:44:46 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 11:38:05 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    const char *test_str1 = "Hello, World!";
    const char *test_str2 = "Hello, Universe!";
    size_t test_len = 7;
    int result = ft_strncmp(test_str1, test_str2, test_len);

    printf("ft_strncmp(\"%s\", \"%s\", %zu) 
	= %d\n", test_str1, test_str2, test_len, result);
    return (0);
}
*/