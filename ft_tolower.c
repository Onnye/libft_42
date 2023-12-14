/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:38:10 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 11:15:51 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
    char test_char1 = 'a';
    char test_char2 = 'Z';
    char test_char3 = '5';

    printf("ft_tolower('%c') = '%c'\n", test_char1, ft_tolower(test_char1));
    printf("ft_tolower('%c') = '%c'\n", test_char2, ft_tolower(test_char2));
    printf("ft_tolower('%c') = '%c'\n", test_char3, ft_tolower(test_char3));

    return (0);
}
*/