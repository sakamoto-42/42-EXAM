/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:12:24 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/27 16:16:32 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;

	count = 0;
	while (begin_list)
	{
		begin_list= begin_list->next;
		count++;
	}	
	return (count);
}
