/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:39:07 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 15:42:18 by juduchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	c;

	if (argc - 1 == 1)
	{
		str = argv[1];
		while (*str)
		{
			if (*str >= 'a' && *str <= 'z')
				c = *str - 32;
			else if (*str >= 'A' && *str <= 'Z')
				c = *str + 32;
			else
				c = *str;
			write(1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}
