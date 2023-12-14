/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:06:10 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:35:55 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char test_char1 = '7';
    char test_char2 = 'A';
    char test_char3 = '$';

    printf("Est-digit '%c' ? %s\n", test_char1, 
	ft_isdigit(test_char1) ? "Oui" : "Non");
    printf("Est-digit '%c' ? %s\n", test_char2, 
	ft_isdigit(test_char2) ? "Oui" : "Non");
    printf("Est-digit '%c' ? %s\n", test_char3, 
	ft_isdigit(test_char3) ? "Oui" : "Non");

    return (0);
}
*/