/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <jachiaga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:58:50 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/20 17:18:09 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
	int dvdn;
	int dvsr;
	dvdn = *a;
	dvsr = *b;
	*a = dvdn / dvsr;
	*b = dvdn % dvsr;
}

