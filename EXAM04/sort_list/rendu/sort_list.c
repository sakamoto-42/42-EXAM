/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:33:21 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/01 17:41:58 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	
}

t_list	*ft_lstnew(void *data)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}



int	main(void)
{
	t_list	*head;

	head = ft_lstnew((void *)1);
	/*ft_lstaddback(&head, (void *)2);
	ft_lstaddback(&head, (void *)3);
	ft_lstaddback(&head, (void *)4);
	ft_lstaddback(&head, (void *)5);*/
	while (*head)
	{
		printf("%d\n", (int) head->data);
		head = head->next;
	}
}
