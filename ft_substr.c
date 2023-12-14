/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:38:38 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 11:21:44 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (NULL);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *test_str = "Hello, World!";
    unsigned int start_pos = 7;
    size_t substring_len = 5;
    char *result = ft_substr(test_str, start_pos, substring_len);
	
    printf("ft_substr(\"%s\", %u, %zu) = \"%s\"\n", test_str, start_pos, substring_len, result);
    free(result);
    return (0);
}
*/