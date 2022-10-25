/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:28:07 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/25 01:56:13 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *count)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", count);
	}
	else if (nbr <= 9 && nbr >= 0)
	{
		ft_putchar(nbr + '0', count);
	}
	else if (nbr < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(nbr * (-1), count);
	}
	else
	{
		ft_putnbr(nbr / 10, count);
		ft_putnbr(nbr % 10, count);
	}
}
