/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:19:23 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 13:17:27 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}	
}

/*
#include <stdio.h>

void modify(unsigned int index, char *c)
{
    *c = (char)(*c + index);
}

int main(void)
{
    char test_str[] = "hello";

    ft_striteri(test_str, &modify);
    printf("ft_striteri(\"hello\", modify) = \"%s\"\n", test_str);
    return (0);
}
*/