/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:52:38 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/24 12:20:26 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printf(const char *str, ... )
{
	int	i;
	int count;

	i = 0;
	va_list ap;
	va_start(ap, str);
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && (str[i + 1] == 'd' || str[i + 1] == 'i' ))
		{
			ft_putnbr(va_arg(ap, int), &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'c' )
		{
			ft_putchar(va_arg(ap, int), &count);
			i++;
		}
		
		else if (str[i] == '%' && str[i + 1] == '%')
		{
			ft_putchar('%', &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 's')
		{
			ft_putstr(va_arg(ap, char *), &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'p')
		{
			ft_putstr("0x",&count);
			ft_printf_hexa_lowercase(va_arg(ap, long), &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'd')
		{
			ft_putnbr(va_arg(ap, int), &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'u')
			{
				ft_putunbr(va_arg(ap, unsigned int), &count);
				i++;
			}
		else if (str[i] == '%' && str[i + 1] == 'x')
		{
			ft_printf_hexa_lowercase(va_arg(ap, unsigned int), &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'X')
		{
			ft_printf_hexa_uppercase(va_arg(ap, int), &count);
			i++;
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}