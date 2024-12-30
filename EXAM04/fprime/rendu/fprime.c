/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:30:51 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/30 15:04:56 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	unsigned int	n;
	unsigned int	prime;
	int				first;

	if (argc - 1 == 1)
	{
		n = atoi(argv[1]);
		prime = 2;
		first = 1;
		while (n > 1)
		{
			while (n % prime == 0)
			{
				if (!first)
					printf("*");
				printf("%d", prime);
				first = 0;
				n = n / prime;
			}
			prime++;
		}
	}
	printf("\n");
}
