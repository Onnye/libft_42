/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:02:01 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/17 17:30:25 by ltufo            ###   ########.fr       */
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
