/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:26:05 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 18:37:04 by juduchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_unique(char *str, char c, int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;

	if (argc - 1 == 2)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (s1[i])
		{
			if (ft_check_unique(s1, s1[i], i))
			{
				j = 0;
				while (s2[j])
				{
					if (s1[i] == s2[j])
					{
						write(1, &s1[i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
