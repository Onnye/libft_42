/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 10:47:18 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 13:04:43 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/*
#include <stdio.h>

int main(void)
{
    const char *test_str = "Hello, World!";
    size_t result = ft_strlen(test_str);

    printf("ft_strlen(\"%s\") = %zu\n", test_str, result);
    return (0);
}
*/