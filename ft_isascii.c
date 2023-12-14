/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:23:49 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:34:40 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    int test_char1 = 'A';
    int test_char2 = 150;
    int test_char3 = 65;

    printf("Est-ascii '%c' ? %s\n", test_char1, 
	ft_isascii(test_char1) ? "Oui" : "Non");
    printf("Est-ascii '%c' ? %s\n", test_char2, 
	ft_isascii(test_char2) ? "Oui" : "Non");
    printf("Est-ascii '%c' ? %s\n", test_char3, 
	ft_isascii(test_char3) ? "Oui" : "Non");
    return (0);
}
*/