/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:48:37 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:45:15 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculate_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *s, long int number, size_t len)
{
	s[len] = '\0';
	if (number == 0)
		s[0] = '0';
	else if (number < 0)
	{
		s[0] = '-';
		number = -number;
	}
	while (number)
	{
		len--;
		s[len] = (number % 10) + '0';
		number /= 10;
	}
}

char	*ft_itoa(int n)
{
	char		*s;
	size_t		len;
	long int	number;

	number = n;
	if (number == -2147483648)
		return (ft_strdup("-2147483648"));
	len = calculate_length(number);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	fill_str(s, number, len);
	return (s);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1 = 123;
    int num2 = -456;
    int num3 = 0;
    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("Nombre : %d, Chaîne : %s\n", num1, str1);
    printf("Nombre : %d, Chaîne : %s\n", num2, str2);
    printf("Nombre : %d, Chaîne : %s\n", num3, str3);
    free(str1);
    free(str2);
    free(str3);
    return (0);
}
*/