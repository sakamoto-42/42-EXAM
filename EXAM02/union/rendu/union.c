/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:09:55 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/26 17:22:19 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_unique(char *s, char c, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc - 1 == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (ft_check_unique(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		j = 0;
		while (argv[2][j])
		{
			if (ft_check_unique(argv[2], argv[2][j], j))
			{
				if (ft_check_unique(argv[1], argv[2][j], i))
					write(1, &argv[2][j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
