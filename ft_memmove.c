/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:43:18 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 14:10:08 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*destination;
	char const	*source;
	size_t		i;

	destination = (char *)dst;
	source = (char const *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (destination > source)
	{
		while (n-- > 0)
			destination[n] = source[n];
	}
	else
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dst);
}

/*
int main(void)
{
    const char test_src[] = "Hello, World!";
    char test_dst[20];

    ft_memmove(test_dst, test_src, 5);
    ft_putstr_fd(test_dst, 1);
    return (0);
}
*/