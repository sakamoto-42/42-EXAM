/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 18:55:46 by juduchar          #+#    #+#             */
/*   Updated: 2024/08/08 18:58:22 by juduchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	reversed_bit;
	int				i;

	reversed_bit = 0;
	i = 8;
	while (i > 0)
	{
		reversed_bit <<= 1;
		reversed_bit |= (octet & 1);
		octet >>= 1;
		i--;
	}
	return (reversed_bit);
}
