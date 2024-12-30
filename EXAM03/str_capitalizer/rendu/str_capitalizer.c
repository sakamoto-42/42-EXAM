/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:42:45 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/30 10:54:43 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc - 1 >= 1)
	{
		i = 0;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					if (j == 0 || argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t')
						argv[i][j] -= 32;
				}
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				{
					if (j != 0 && argv[i][j - 1] != ' ' && argv[i][j - 1] != '\t')
						argv[i][j] += 32;
				}
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
