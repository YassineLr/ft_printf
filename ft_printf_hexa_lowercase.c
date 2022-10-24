/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:25:50 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/24 10:35:46 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hexa_lowercase(unsigned long nb, int *count)
{
	char c;

	if(nb < 16)
	{
		if(nb < 10)
			c = nb + '0';
		else
			c = nb + 87;
		ft_putchar(nb, count);
	}
	else
	{
		ft_printf_hexa_lowercase(nb / 16, count);
		ft_printf_hexa_lowercase(nb % 16, count);
	}
}