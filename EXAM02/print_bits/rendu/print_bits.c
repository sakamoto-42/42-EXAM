/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:11:14 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/26 16:26:07 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	byte;

	i = 7;
	byte = octet >> i;
	while (i-- >= 0)
	{
		byte = byte & 1;
		if (byte == 0)
			write(1, "0", 1);
		else
			write(1, "1", 1);
		byte = octet >> i;
	}
}
