/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:33:41 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/07 16:23:24 by ltufo            ###   ########.fr       */
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
	return (result);
}
