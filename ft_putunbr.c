/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:27:16 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/24 10:43:52 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nbr, int *count)
{
	if (nbr <= 9 && nbr >= 0)
		ft_putchar(nbr + '0', count);
	else
	{
		ft_putunbr(nbr / 10, count);
		ft_putunbr(nbr % 10, count);
	}
}
