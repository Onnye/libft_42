/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:24:13 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:41:55 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
    int test_char2 = 10;
    int test_char3 = '$';

    printf("Est-printable '%c' ? %s\n", 
	test_char1, ft_isprint(test_char1) ? "Oui" : "Non");
    printf("Est-printable '%c' ? %s\n", 
	test_char2, ft_isprint(test_char2) ? "Oui" : "Non");
    printf("Est-printable '%c' ? %s\n", 
	test_char3, ft_isprint(test_char3) ? "Oui" : "Non");
    return (0);
}
*/