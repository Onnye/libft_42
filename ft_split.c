/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:33:41 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/16 13:36:51 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*strdup_range(char const *start, char const *end)
{
	char	*str;
	int		len;
	int		i;

	len = end - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = *start;
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static void	fill_result(char **result, const char *s, char c)
{
	int			i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = strdup_range(start, s);
			if (result[i] == NULL)
			{
				while (i >= 0)
					free(result[i--]);
				free(result);
				return ;
			}
			i++;
		}
	}
	result[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	fill_result(result, s, c);
	if (result == NULL)
		return (NULL);
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

void print_split_result(char **result)
{
    if (result == NULL)
    {
        printf("ft_split result: NULL\n");
        return;
    }

    printf("ft_split result:\n");
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("  [%d]: \"%s\"\n", i, result[i]);
    }
}

int main(void)
{
    const char *test_str = "Hello,World! This,is a,test.";
    char **result = ft_split(test_str, ',');

    print_split_result(result);
    for (int i = 0; result[i] != NULL; i++)
    {
        free(result[i]);
    }
    free(result);
    return (0);
}
*/