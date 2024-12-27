/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:07:56 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/26 14:12:43 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_check_c_in_str(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (ft_check_c_in_str(accept, *s))
			count++;
		else
			break ;
		s++;
	}
	return (count);
}
