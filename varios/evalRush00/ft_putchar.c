/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cejulian <cejulian@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 11:20:23 by cejulian          #+#    #+#             */
/*   Updated: 2023/02/12 16:21:34 by cejulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	horizontal(int v, int h, int vmax, int hmax)
{
	while (h <= hmax)
	{
		if ((h == 1 && v == 1) || (h == hmax && v == 1))
		{
			write(1, "o", 1);
		}
		else if ((h == 1 && v == vmax) || (h == hmax && v == vmax))
		{
			write(1, "o", 1);
		}
		else if ((v == 1 || v == vmax) && (h > 1 && h < hmax))
		{
			write(1, "-", 1);
		}
		else if ((v > 1 || v < vmax) && (h == 1 || h == hmax))
		{
			write(1, "|", 1);
		}
		else
		{
			write(1, " ", 1);
		}
		h = h + 1;
	}
}

int	ft_putchar(int x, int y)
{
	int	h;
	int	hmax;
	int	v;
	int	vmax;

	h = 1;
	hmax = x;
	v = 1;
	vmax = y;
	if (x < 1 || x > 361)
	{
		return (1);
	}
	if (y < 1 || y > 77)
	{
		return (1);
	}
	while (v <= vmax)
	{
		horizontal (v, h, vmax, hmax);
		write (1, "\n", 1);
		h = 1;
		v = v + 1;
	}
	return (0);
}
