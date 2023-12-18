/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:47:27 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/15 14:12:03 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			temp = *lst;
			del(temp->content);
			*lst = temp->next;
			free(temp);
		}
		*lst = NULL;
	}
}
