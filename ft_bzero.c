/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 13:46:43 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:16:40 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}	
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char buffer[10];

    strcpy(buffer, "abcdefghi");
    printf("Avant ft_bzero : %s\n", buffer);
    ft_bzero(buffer, sizeof(buffer));
    printf("Après ft_bzero : %s\n", buffer);
    return (0);
}
*/