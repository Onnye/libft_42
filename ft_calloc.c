/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:46:35 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 09:27:02 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*allocated_memory;

	total_size = nmemb * size;
	if (nmemb != 0 && total_size / nmemb != size)
		return (NULL);
	allocated_memory = malloc(total_size);
	if (!allocated_memory)
		return (NULL);
	ft_memset(allocated_memory, 0, total_size);
	return (allocated_memory);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(nmemb, size);

    if (arr != NULL)
    {
        printf("Valeurs initiales du tableau : %d %d %d %d %d\n", 
		arr[0], arr[1], arr[2], arr[3], arr[4]);
        arr[1] = 42;
        arr[3] = 99;
        printf("Tableau après modification : %d %d %d %d %d\n", arr[0], 
		arr[1], arr[2], arr[3], arr[4]);
        free(arr);
    }
    else
    {
        fprintf(stderr, "Allocation de mémoire échouée.\n");
    }
    return (0);
}
*/