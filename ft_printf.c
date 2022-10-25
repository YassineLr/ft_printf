/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:52:38 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/25 03:37:54 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	specifier_handler(const char *str, va_list ap, int *count, int i)
{
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (str[i] == 'u')
		ft_putunbr(va_arg(ap, unsigned int), count);
	else if (str[i] == 'c' )
		ft_putchar(va_arg(ap, int), count);
	else if (str[i] == '%')
		ft_putchar('%', count);
	else if (str[i] == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (str[i] == 'p')
	{
		ft_putstr("0x", count);
		ft_printf_hexa_lowercase(va_arg(ap, long), count);
	}
	else if (str[i] == 'x')
		ft_printf_hexa_lowercase(va_arg(ap, unsigned int), count);
	else if (str[i] == 'X')
		ft_printf_hexa_uppercase(va_arg(ap, int), count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ap;

	i = 0;
	va_start(ap, str);
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			specifier_handler(str, ap, &count, i);
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(ap);
	return (count);
}
