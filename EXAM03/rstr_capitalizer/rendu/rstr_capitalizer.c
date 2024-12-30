/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:22:34 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/30 10:36:54 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc - 1 >= 1)
	{
		i = 1;
		while (i < argc)
		{
			while (*argv[i])
			{
				if (*argv[i] >= 'A' && *argv[i] <= 'Z')
				{
					if (*(argv[i] + 1) && *(argv[i] + 1) != ' ' && *(argv[i] + 1) != '\t')
						*argv[i] += 32;
				}
				if (*argv[i] >= 'a' && *argv[i] <= 'z')
				{
					if (!(*(argv[i] + 1)) || *(argv[i] + 1) == ' ' || *(argv[i] + 1) == '\t')
						*argv[i] -= 32;
				}
				write(1, argv[i], 1);
				argv[i]++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
