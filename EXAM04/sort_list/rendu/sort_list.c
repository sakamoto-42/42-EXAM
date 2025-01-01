/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 17:33:21 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/01 18:16:45 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

/*
#include <stdlib.h>
#include <stdio.h>

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

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstaddback(t_list **lst, t_list	*new)
{
	t_list	*last;

	if (!lst | !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

int	ascending(int a, int b)
{
	return (a <= b);
}
*/

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	void	*tmp;
	t_list	*head;

	head = lst;
	while (lst->next)
	{
		if (!(*cmp)((long long int)lst->data, (long long int)lst->next->data))
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}

/*
int	main(void)
{
	t_list	*head;
	t_list	*sorted_lst;

	head = ft_lstnew((void *)5);
	ft_lstaddback(&head, ft_lstnew((void *)4));
	ft_lstaddback(&head, ft_lstnew((void *)3));
	ft_lstaddback(&head, ft_lstnew((void *)2));
	ft_lstaddback(&head, ft_lstnew((void *)1));
	sorted_lst = sort_list(head, ascending);
	while (sorted_lst)
	{
		printf("%lld\n", (long long int) sorted_lst->data);
		sorted_lst = sorted_lst->next;
	}
}
*/
