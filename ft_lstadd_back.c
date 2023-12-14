/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltufo <ltufo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:38:46 by ltufo             #+#    #+#             */
/*   Updated: 2023/12/14 10:38:58 by ltufo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}

/*
#include <stdio.h>
int main(void)
{
  t_list *head = ft_lstnew("Node 1");
  ft_lstadd_front(&head, ft_lstnew("Node 2"));
  ft_lstadd_front(&head, ft_lstnew("Node 3"));
  ft_lstadd_back(&head, ft_lstnew("Node 4"));

  t_list *current_node = head;
  printf("ft_lstadd_back: ");
  while (current_node != NULL)
  {
    printf("%s -> ", (char *)current_node->content);
    current_node = current_node->next;
  }
  printf("\n\n");
  return (0);
}
*/