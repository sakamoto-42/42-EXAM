/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 10:20:22 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/01 08:55:02 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
#include <stdlib.h>
void	ft_list_upper(void *data)
{
	char	*str;

	if (data)
	{
		str = (char *) data;
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
			str++;
		}
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

t_list	*ft_lst_new(void *data)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lst_add_back(t_list **lst, t_list *new)
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
*/

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	t_list	*head;

	head = ft_lst_new(strdup("bonjour "));
	ft_lst_add_back(&head, ft_lst_new(strdup("tout ")));
	ft_lst_add_back(&head, ft_lst_new(strdup("le ")));
	ft_lst_add_back(&head, ft_lst_new(strdup("monde")));
	ft_list_foreach(head, ft_list_upper);
	while (head)
	{
		printf("%s", (char *)head->data);
		head = head->next;
	}
}
*/
