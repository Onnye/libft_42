/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:16:56 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 11:27:58 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strrchr(set, s1[start]))
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]))
	{
		end--;
	}
	trimmed = (char *)malloc(end - start + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start] = '\0';
	return (trimmed);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *test_str = "   Hello, World!   ";
    const char *set = " ";
    char *result = ft_strtrim(test_str, set);

    printf("ft_strtrim(\"%s\", \"%s\") = \"%s\"\n", test_str, set, result);
    free(result);
    return (0);
}
*/