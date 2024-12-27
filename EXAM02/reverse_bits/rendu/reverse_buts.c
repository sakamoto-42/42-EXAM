/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_buts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:28:02 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/26 16:41:04 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	result = 0;
	i = 8;
	while (i > 0)
	{
		result <<= 1;
		result |= octet & 1;
		octet >>= 1;
		i--;
	}
	return (result);
}
