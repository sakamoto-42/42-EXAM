/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:54:52 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/18 21:01:20 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc - 1 == 3)
	{
		if (argv[2][1] || argv[2][1])
		{
			write(1, "\n", 1);
			return (1);
		}
		while (*argv[1])
		{
			if (*argv[1] == argv[2][0])
				*argv[1] = argv[3][0];
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
