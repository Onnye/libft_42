/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:44 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:31:44 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		result;
	int		sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>

int main(void)
{
    const char *str1 = "12345";
    const char *str2 = "-6789";
    const char *str3 = "   42";
    const char *str4 = "   +99";
    const char *str5 = "  \t\n\r\v\f-123";
	const char *str6 = "";

    int result1 = ft_atoi(str1);
    int result2 = ft_atoi(str2);
    int result3 = ft_atoi(str3);
    int result4 = ft_atoi(str4);
    int result5 = ft_atoi(str5);
	int result6 = ft_atoi(str6);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
    printf("Result 4: %d\n", result4);
    printf("Result 5: %d\n", result5);
	printf("Result 6: %d\n", result6);
    return (0);
}
*/