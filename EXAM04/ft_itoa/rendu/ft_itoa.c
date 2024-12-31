/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:51:54 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/31 10:13:44 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_nbr(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int				count;
	char			*s;
	unsigned int	n;

	count = count_nbr(nbr);
	s = (char *) malloc((count + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (nbr < 0)
	{
		s[0] = '-';
		n = -nbr;
	}
	else
		n = nbr;
	s[count] = '\0';
	while (count > 0 && !(count == 1 && nbr < 0))
	{
		count--;
		s[count] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}
