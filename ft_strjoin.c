/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:20:55 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/23 13:02:20 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;
	size_t	total_len;
	
	if (s1 == NULL || s2 == NULL)
		return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
    if (result == NULL)
	{
        return (NULL);
	}
	total_len = ft_strlcpy(result, s1, len_s1 + len_s2 + 1);
	ft_strlcat(result, s2, total_len + len_s2 + 1);
	return (result);
}