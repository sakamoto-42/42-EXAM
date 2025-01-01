/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 15:56:44 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/01 16:37:08 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*s;
	int		i;
	int		start;
	int		end;

	if (argc - 1 == 1)
	{
		s = argv[1];
		i = 0;
		while (s[i])
			i++;
		i--;
		while (i >= 0)
		{
			end = i;
			while (i >= 0 && s[i] != ' ')
				i--;
			start = i + 1;
			write(1, &s[start], end - start + 1);
			if (i >= 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
}
