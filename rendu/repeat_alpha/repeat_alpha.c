/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:15:37 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 11:24:25 by juduchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		nb;
	int		alpha;
	char	*str;

	if (argc - 1 == 1)
	{
		str = argv[1];
		while (*str)
		{
			alpha = 0;
			if (*str >= 'a' && *str <= 'z')
				alpha = 97;
			if (*str >= 'A' && *str <= 'Z')
				alpha = 65;
			if (alpha)
			{
				nb = *str - alpha + 1;
				i = 0;
				while (i < nb)
				{
					write(1, str, 1);
					i++;
				}
			}
			else
				write(1, str, 1);
			str++;
		}
	}
	write(1, "\n", 1);
}
