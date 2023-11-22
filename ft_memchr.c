/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:11:09 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/17 15:30:09 by ltufo            ###   ########.fr       */
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
