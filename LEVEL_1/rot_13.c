/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:44:52 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/18 20:49:05 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		alpha;
	char	c;

	if (argc - 1 == 1)
	{
		while (*argv[1])
		{
			alpha = 0;
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
				alpha = 'a';
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				alpha = 'A';
			if (alpha)
				c = ((*argv[1] + 13 - alpha) % 26) + alpha;
			else
				c = *argv[1];
			argv[1]++;
			write(1, &c, 1);
		}
	}
	write(1, "\n", 1);
}
