/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 11:36:58 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 13:03:00 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	size_t	len;
	char	*result;
	size_t	i;

	len = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len] != '\0')
		len++;
	result = (char *)malloc(len +1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

char convert(unsigned int index, char c)
{
    return (char)(c + index);
}

int main(void)
{
    const char *test_str = "hello";
    char *result = ft_strmapi(test_str, &convert);

    printf("ft_strmapi(\"%s\", convert) = \"%s\"\n", test_str, result);
    free(result);
    return (0);
}
*/