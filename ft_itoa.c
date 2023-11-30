/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:48:37 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/28 18:22:09 by ltufo            ###   ########.fr       */
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
