/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:09:11 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:31:38 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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

    printf("Est-alnum '%c' ? %s\n", 
	test_char1, ft_isalnum(test_char1) ? "Oui" : "Non");
    printf("Est-alnum '%c' ? %s\n", 
	test_char2, ft_isalnum(test_char2) ? "Oui" : "Non");
    printf("Est-alnum '%c' ? %s\n", 
	test_char3, ft_isalnum(test_char3) ? "Oui" : "Non");
    return (0);
}
*/