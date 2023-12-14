/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:02:01 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 14:15:22 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (n > 0)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
		n--;
	}
	return (0);
}

/*
int main(void)
{
    const char test_str1[] = "Hello World !";
    const char test_str2[] = "Hello";
    size_t compare_size = 5;
    int result = ft_memcmp(test_str1, test_str2, compare_size);

    ft_putnbr_fd(result, 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/