/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 10:58:51 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/30 11:07:58 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *s)
{
	unsigned int	result;

	result = 0;
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (result);
}

void	ft_putnbr(int n)
{
	char	c;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	unsigned int	n;
	unsigned int	i;

	if (argc - 1 == 1)
	{
		n = ft_atoi(argv[1]);
		i = 1;
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
