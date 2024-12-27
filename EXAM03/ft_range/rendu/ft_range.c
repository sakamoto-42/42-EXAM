/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:20:25 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/27 16:31:06 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	step;
	int	i;
	int	*tab;

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
		tab[i] = start;
		start += step;
		i++;
	}
	return (tab);
}
