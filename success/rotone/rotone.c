/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:30:48 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 11:38:45 by juduchar         ###   ########.fr       */
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
			if ((*str >= 'a' && *str <= 'y') || (*str >= 'A' && *str <= 'Y'))
				c = *str + 1;
			else if (*str == 'z')
				c = 'a';
			else if (*str == 'Z')
				c = 'A';
			else
				c = *str;
			write(1, &c, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}
