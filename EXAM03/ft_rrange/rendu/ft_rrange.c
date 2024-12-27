/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:10:21 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/27 17:19:15 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	len;
	int	step;
	int	*tab;
	int	i;

	if (start < end)
	{
		len = end - start + 1;
		step = 1;
	}
	else
	{
		len = start - end + 1;
		step = -1;
	}
	tab = (int *) malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		tab[i] = end;
		end -= step;
		i++;
	}
	return (tab);
}
