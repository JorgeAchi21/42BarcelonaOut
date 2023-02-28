/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jachiaga <mentes.egrjoj@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:26:39 by jachiaga          #+#    #+#             */
/*   Updated: 2023/02/28 12:01:32 by jachiaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_size()
{
	return(5);
}

char *ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;
	while (src[i] != '\0')
	{
		//printf("%d-", src[i]);
		dest[i]=src[i];
		i++;
	}
	return(0);
}
