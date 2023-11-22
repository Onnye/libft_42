/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:05:10 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/20 18:46:04 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = ft_strlen(little);
	i = 0;
	if (big == 0 && len == 0)
		return (NULL);
	if (little_len == 0)
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && len >= little_len)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
		{
			return ((char *)&big[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}
