/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 10:51:43 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 14:17:16 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    const char *test_str = "Hello, World!";
    char mutable_str[256];

    ft_strlcpy(mutable_str, test_str, sizeof(mutable_str));
    ft_putstr_fd(mutable_str, 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/