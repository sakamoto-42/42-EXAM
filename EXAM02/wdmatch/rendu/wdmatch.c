/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 17:23:25 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/26 17:30:21 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	if (argc - 1 == 2)
	{
		s1 = argv[1];
		s2 = argv[2];
		while (*s1)
		{
			while (*s2 && *s1 != *s2)
				s2++;
			s1++;
		}
		if (*s2)
		{
			while (*argv[1])
			{
				write(1, argv[1], 1);
				argv[1]++;
			}
		}
	}
	write(1, "\n", 1);
}