/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:15:20 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 11:00:36 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
    char test_char1 = 'a';
    char test_char2 = 'Z';
    char test_char3 = '5';

    printf("ft_toupper('%c') = '%c'\n", test_char1, ft_toupper(test_char1));
    printf("ft_toupper('%c') = '%c'\n", test_char2, ft_toupper(test_char2));
    printf("ft_toupper('%c') = '%c'\n", test_char3, ft_toupper(test_char3));
    return (0);
}
*/