/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:45:31 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/20 15:34:57 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		counter;

	str = (char *)s;
	counter = ft_strlen(str);
	while (counter >= 0)
	{
		if (str[counter] == (char)c)
			return (str + counter);
		counter--;
	}
	return (NULL);
}
