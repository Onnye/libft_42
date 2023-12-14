/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:11:09 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 14:20:05 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (n > 0)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *) &p[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}

/*
int main(void)
{
    const char test_str[] = "Hello, World!";
    int search_char = 'o';
    size_t search_size = 5;
    void *result = ft_memchr(test_str, search_char, search_size);

    if (result != NULL)
        ft_putnbr_fd((int)((char *)result - test_str), 1);
    else
        ft_putstr_fd("Not found", 1);

    ft_putchar_fd('\n', 1);
    return (0);
}
*/