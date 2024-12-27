/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 17:20:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/27 17:30:18 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		i;
	if (argc - 1 == 2)
	{
		s1 = argv[1];
		s2 = argv[2];
		i = 0;
		while (*s1)
		{
			while (s2[i])
			{
				if (*s1 == s2[i])
					s1++;
				i++;
			}
			if (!*s1)
				write(1, "1\n", 2);
			else if (!s2[i])
			{
				write(1, "0\n", 2);
				return (0);
			}
		}
	}
	else
		write(1, "\n", 1);
}
