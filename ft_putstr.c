/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 08:26:17 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/25 01:56:20 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		i = 0;
		while (s[i])
		{
			ft_putchar(s[i], count);
			i++;
		}
	}
}
