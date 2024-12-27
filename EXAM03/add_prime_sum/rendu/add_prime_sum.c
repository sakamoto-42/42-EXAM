/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 09:42:01 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/27 10:30:17 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str== '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= 0 && *str <= 9)
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	find_next_prime(int n)
{
	n++;
	while (!is_prime(n))
		n++;
	return (n);
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
	int				n;
	int				i;
	int				res;

	if (argc - 1 == 1)
	{
		n = ft_atoi(argv[1]);
		i = 1;
		res = 0;
		if (n > 0)
		{
			while (i < n)
			{
				i = find_next_prime(i);
				if (i <= n)
					res = res + i;
			}
			ft_putnbr(res);
			write(1, "\n", 1);
			return (0);
		}
	}
	write(1, "0\n", 2);
}
