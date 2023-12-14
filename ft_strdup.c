/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:05:18 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 13:22:02 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = (char *) malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *test_str = "Hello, World!";
    char *result = ft_strdup(test_str);

    printf("ft_strdup(\"%s\") = \"%s\"\n", test_str, result);
    free(result);
    return (0);
}
*/