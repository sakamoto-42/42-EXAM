/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:59:33 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 15:03:34 by juduchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	search;
	char	replace;

	if (argc - 1 == 3)
	{
		str = argv[1];
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			search = argv[2][0];
			replace = argv[3][0];
			while (*str)
			{
				if (*str == search)
					write(1, &replace, 1);
				else
					write(1, str, 1);
				str++;
			}
		}
	}
	write(1, "\n", 1);
}
