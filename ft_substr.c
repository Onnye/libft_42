/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:38:38 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/22 15:01:25 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;
	size_t	i;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
	}
	else
	{
		if (len < s_len - start)
		{
			substr = (char *)malloc(len + 1);
		}
		else
		{
			substr = (char *)malloc(s_len - start + 1);
			len = s_len - start;
		}
		if (substr == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
		substr[i] = s[start + i];
			i++;
		}
		substr[len] = '\0';
	}
	return (substr);
}
