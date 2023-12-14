/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:05:10 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 14:17:32 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = ft_strlen(little);
	i = 0;
	if (big == 0 && len == 0)
		return (NULL);
	if (little_len == 0)
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && len >= little_len)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    const char *test_big = "Hello, World!";
    const char *test_little = "World";
    size_t test_len = 13;
    char *result = ft_strnstr(test_big, test_little, test_len);

    if (result != NULL)
        printf("ft_strnstr(\"%s\", \"%s\", %zu) 
	= \"%s\"\n", test_big, test_little, test_len, result);
    else
        printf("ft_strnstr(\"%s\", \"%s\", %zu) 
	= NULL\n", test_big, test_little, test_len);
    return (0);
}
*/