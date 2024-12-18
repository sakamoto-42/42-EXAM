/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:31:41 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/18 20:37:05 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	alpha;

	if (argc - 1 == 1)
	{
		while (*argv[1])
		{
			i = 0;
			alpha = 0;
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
				alpha = 'a';
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				alpha = 'A';
			if (alpha)
			{
				while (i < (*argv[1] - alpha) + 1)
				{
					write(1, argv[1], 1);
					i++;
				}
			}
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
