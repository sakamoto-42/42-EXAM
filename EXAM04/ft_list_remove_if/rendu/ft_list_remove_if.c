/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 09:00:39 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/01 10:56:35 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
#include <stdlib.h>
#include <string.h>
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

void	ft_lstaddback(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
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

int	ft_cmp(void *data1, void *data2)
{
	char	*s1;
	char	*s2;

	s1 = (char *) data1;
	s2 = (char *) data2;
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (1);
		s1++;
		s2++;
	}
	return (0);
}
*/

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*previous;
	t_list	*current;
	t_list	*tmp;

	previous = NULL;
	current = *begin_list;
	while (current)
	{
		if ((cmp)(data_ref, current->data) == 0)
		{
			tmp = current;
			if (!previous)
				*begin_list = current->next;
			else
				previous->next = current->next;
			current = current->next;
			free(tmp);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}

/*
int	main(void)
{
	t_list	*head;

	head = ft_lstnew((void *)strdup("1"));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("2")));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("3")));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("4")));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("5")));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("4")));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("3")));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("2")));
	ft_lstaddback(&head, ft_lstnew((void *)strdup("1")));
	ft_list_remove_if(&head, (void *)"3", ft_cmp);
	while (head)
	{
		printf("%s", (char *)head->data);
		head = head->next;
	}
}
*/
