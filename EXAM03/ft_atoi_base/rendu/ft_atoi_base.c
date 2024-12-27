/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 15:26:18 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/27 16:06:15 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_index(char c, char *base)
{
	int	i;

	if (c >= 'A' && c <= 'Z')
		c += 32;
	i = 0;
	while (i < 16 && c != base[i])
		i++;
	return (i);
}

int	ft_power(int base, int weight)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < weight)
	{
		result *= base;
		i++;
	}
	return (result);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		result;
	int		weight;
	int		rank;

	result = 0;
	if (str_base < 0 || str_base > 16)
		return (0);
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	weight = ft_get_index(*str, "0123456789abcdef");
	rank = ft_strlen(str) - 1;
	while (*str && weight != 16)
	{
		result = result + weight * ft_power(str_base, rank);
		str++;
		weight = ft_get_index(*str, "0123456789abcdef");  
		rank--;
	}
	return (sign * result);
}
