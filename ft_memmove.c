/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:43:18 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/20 14:20:36 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (!dest && !src)
		return (NULL);
	if (d <= s || d >= s + n)
	{
		while (n-- > 0)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n-- > 0)
		{
			*d-- = *s--;
		}
	}
	return (dest);
}
