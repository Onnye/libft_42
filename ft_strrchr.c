/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:45:31 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 11:32:55 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		counter;

	str = (char *)s;
	counter = ft_strlen(str);
	while (counter >= 0)
	{
		if (str[counter] == (char)c)
			return (str + counter);
		counter--;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    const char *test_str = "Hello, World!";
    int target_char = 'o';
    char *result = ft_strrchr(test_str, target_char);

    if (result != NULL)
        printf("ft_strrchr(\"%s\", '%c') 
	= \"%s\"\n", test_str, (char)target_char, result);
    else
        printf("ft_strrchr(\"%s\", '%c') 
	= NULL\n", test_str, (char)target_char);
    return (0);
}
*/