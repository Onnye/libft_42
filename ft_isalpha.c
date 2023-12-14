/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:05:44 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:32:26 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char test_char1 = 'A';
    char test_char2 = '5';
    char test_char3 = '$';

    printf("Est-alpha '%c' ? %s\n", test_char1, 
	ft_isalpha(test_char1) ? "Oui" : "Non");
    printf("Est-alpha '%c' ? %s\n", test_char2, 
	ft_isalpha(test_char2) ? "Oui" : "Non");
    printf("Est-alpha '%c' ? %s\n", test_char3, 
	ft_isalpha(test_char3) ? "Oui" : "Non");
    return (0);
}
*/