/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:55:15 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 10:41:03 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
#include <stdio.h>
int main(void)
{
    t_list *head = ft_lstnew("Node 1");
    ft_lstadd_front(&head, ft_lstnew("New Node"));
    ft_lstadd_front(&head, ft_lstnew("Node 2"));
    ft_lstadd_front(&head, ft_lstnew("Node 3"));

    t_list *current = head;
    while (current != NULL)
    {
        printf("ft_lstadd_front: %s\n", (char*)current->content);
        current = current->next;
    }
    return (0);
}
*/