/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:08:39 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/30 10:19:57 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + *str - '0';
			str++;
		}
	}
	return (result);
}

void	ft_print_hex(unsigned int n, const char *base)
{
	char	c;

	if (n >= 16)
		ft_print_hex(n / 16, base);
	c = base[n % 16];
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	unsigned int	n;

	if (argc - 1 == 1)
	{
		n = ft_atoi(argv[1]);
		ft_print_hex(n, "0123456789abcdef");
	}
	write(1, "\n", 1);
}
