/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 16:44:36 by sakamoto-42       #+#    #+#             */
/*   Updated: 2025/01/01 17:04:01 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (argc - 1 == 1)
	{
		str = argv[1];
		start = 0;
		i = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		end = i - 1;
		while (str[i])
		{
			while (str[i] == ' ' || str[i] == '\t')
				i++;
			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, " ", 1);
		}
		write(1, &str[start], end - start + 1);
	}
	write(1, "\n", 1);
}
