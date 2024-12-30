/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 09:43:16 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/30 10:07:01 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_set_min_max(unsigned int a, unsigned int b,
	unsigned int *min, unsigned int *max)
{
	if (a < b)
	{
		*min = a;
		*max = b;
	}
	else
	{
		*min = b;
		*max = a;
	}
}

int	main(int argc, char **argv)
{
	unsigned int	min;
	unsigned int	max;
	unsigned int	remainder;

	if (argc - 1 == 2)
	{
		ft_set_min_max(atoi(argv[1]), atoi(argv[2]), &min, &max);
		remainder = max % min;
		while (remainder != 0)
		{
			max = min;
			min = remainder;
			remainder = max % min;
		}
		printf("%d", min);
	}
	printf("\n");
}
