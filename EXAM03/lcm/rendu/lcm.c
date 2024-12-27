/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:32:35 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/27 18:02:03 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;
	unsigned int	j;

	if (a == 0 || b == 0)
		return (0);
	i = a;
	j = b;
	while (i != j)
	{
		if (i < j)
			i += a;
		else
			j += b;
	}
	return (i);
}
