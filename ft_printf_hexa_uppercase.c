/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:28:45 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/24 12:22:43 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_hexa_uppercase(unsigned long nb, int *count)
{
	char c;

	if(nb < 16)
	{
		if(nb < 10)
			c = nb + '0';
		else
			c = nb + 55;
	    ft_putchar(c, count);
	}
	else
	{
		ft_printf_hexa_uppercase(nb / 16, count);
		ft_printf_hexa_uppercase(nb % 16, count);
	}
}