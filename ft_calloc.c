/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:46:35 by ltufo             #+#    #+#             */
/*   Updated: 2023/11/20 17:39:29 by ltufo            ###   ########.fr       */
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
