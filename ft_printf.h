/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 02:02:52 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/25 01:54:08 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_printf_hexa_lowercase(unsigned long nb, int *count);
void	ft_printf_hexa_uppercase(unsigned int nb, int *count);
void	ft_putnbr(int nbr, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putunbr(unsigned int nbr, int *count);

#endif
