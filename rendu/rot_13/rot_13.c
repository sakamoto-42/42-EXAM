/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:21:57 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 15:26:09 by juduchar         ###   ########.fr       */
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
			if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
				c = *str + 13;
			else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
				c = *str - 13;
			else
				c = *str;
			write(1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}
