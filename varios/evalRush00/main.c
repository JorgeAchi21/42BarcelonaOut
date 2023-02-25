/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cejulian <cejulian@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:44:02 by cejulian          #+#    #+#             */
/*   Updated: 2023/02/14 16:45:52 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	rush00(int x, int y);

int	main(int argc, char **argv)
{
	int h = 5;
	int v = 3;
	if (argc == 3)
	{
		h = atoi(argv[1]);
		v = atoi(argv[2]);
	}
	rush00 (h, v);
	return (0);
}
