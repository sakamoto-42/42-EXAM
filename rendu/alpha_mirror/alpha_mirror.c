/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:02:57 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 19:15:08 by juduchar         ###   ########.fr       */
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
				c = 26 - (*str - 97 + 1) + 97;
			else if (*str >= 'A' && *str <= 'Z')
				c = 26 - (*str - 65 + 1) + 65;
			else
				c = *str;
			write(1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}
