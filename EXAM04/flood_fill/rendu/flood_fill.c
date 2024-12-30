/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakamoto-42 <sakamoto-42@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:59:45 by sakamoto-42       #+#    #+#             */
/*   Updated: 2024/12/30 15:05:55 by sakamoto-42      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_point.h"
#include <stdio.h>
#include <stdlib.h>

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	c;
	t_point	p;

	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';
	if (begin.y > 0 && tab[begin.y - 1][begin.x] == c)
	{
		p.x = begin.x;
		p.y = begin.y - 1;
		flood_fill(tab, size, p);
	}
	if (begin.y < size.y - 1 && tab[begin.y + 1][begin.x] == c)
	{
		p.x = begin.x;
		p.y = begin.y + 1;
		flood_fill(tab, size, p);
	}
	if (begin.x > 0 && tab[begin.y][begin.x - 1] == c)
	{
		p.x = begin.x - 1;
		p.y = begin.y;
		flood_fill(tab, size, p);
	}
	if (begin.x < size.x - 1 && tab[begin.y][begin.x + 1] == c)
	{
		p.x = begin.x + 1;
		p.y = begin.y;
		flood_fill(tab, size, p);
	}
}

/*
char	**make_area(char **area, t_point size)
{
	char	**result;
	int	i;
	int	j;

	result = malloc(sizeof(char *) * size.y);
	i = 0;
	while (i < size.y)
	{
		result[i] = malloc(sizeof(char *) * (size.x + 1));
		j = 0;
		while (j < size.x)
		{
			result[i][j] = area[i][j];
			j++;
		}
		i++;
	}
	return (result);
}

void	print_tab(char **a, t_point size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size.y)
	{
		j = 0;
		while (j < size.x)
		{
			printf("%c", a[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

int	main(void)
{
	char	**area;
	t_point	size = { 8, 5 };
	t_point	begin = { 2, 2 };
	char	*zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001"
	};
	area = make_area(zone, size);
	print_tab(area, size);
	flood_fill(area, size, begin);
	printf("\n");
	print_tab(area, size);
	return (0);
}
*/
