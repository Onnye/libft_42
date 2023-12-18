/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:27:46 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/15 11:16:50 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		counter;

	str = (char *)s;
	counter = 0;
	if ((unsigned char)c == 0)
		return (str + ft_strlen(str));
	while (str[counter] != '\0')
	{
		{
			if ((unsigned char)c == str[counter])
				return (str + counter);
			counter++;
		}
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    const char *test_str = "Hello, World!";
    int test_char = 'o';
    char *result = ft_strchr(test_str, test_char);

    if (result != NULL)
        printf("ft_strchr(\"%s\", '%c') 
	= \"%s\"\n", test_str, test_char, result);
    else
        printf("ft_strchr(\"%s\", '%c') 
	= NULL\n", test_str, test_char);

    return (0);
}
*/