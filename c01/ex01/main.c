/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:46:18 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/20 14:49:33 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int ********nbr);

int	main(void)
{
	int	i;
	int	*pint1;
	int **pint2;
	int ***pint3;
	int ****pint4;
	int *****pint5;
	int ******pint6;
	int *******pint7;
	int ********pint8;

	pint1 = &i;
	pint2 = &pint1;
	pint3 = &pint2;
	pint4 = &pint3;
	pint5 = &pint4;
	pint6 = &pint5;
	pint7 = &pint6;
	pint8 = &pint7;
	//********pint8 = 50;
	//printf ("%d\n", ********pint8);

	ft_ultimate_ft (pint8);
	return (0);
}
