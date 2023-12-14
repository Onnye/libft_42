/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:06:15 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 14:13:05 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		i;

	destination = (char *)dest;
	source = (const char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
    const char test_src[] = "Hello, World!";
    char test_dst[20];

    ft_memcpy(test_dst, test_src, 5);
    ft_putstr_fd(test_dst, 1);
    return (0);
}
*/