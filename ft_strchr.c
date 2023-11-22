/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:27:46 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/20 19:07:53 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		counter;

	str = (char *)s;
	counter = 0;
	if ((unsigned char)c == 0)
		return (str + ft_strlen(str));
	while (str[counter] != '\0')
	{
		{
			if ((unsigned char)c == str[counter])
				return (str + counter);
			counter++;
		}
	}
	return (NULL);
}
