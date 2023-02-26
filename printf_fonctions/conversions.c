/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audrey.42qc <audrey.42qc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:24:02 by mchampag          #+#    #+#             */
/*   Updated: 2021/11/22 16:12:04 by audrey.42qc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	conv_character(char *str, int bytes, va_list list)
{
	if (*str == 'c')
		bytes = ft_putchar(va_arg(list, int));
	if (*str == '%')
		bytes = ft_putchar(*str);
	return (bytes);
}

int	conv_string(char *str, int bytes, va_list list)
{
	if (*str == 's')
		bytes = ft_putstr(va_arg(list, char *));
	return (bytes);
}

int	conv_hexa(char *str, int bytes, va_list list)
{
	if (*str == 'p' || *str == 'x' || *str == 'X')
		bytes = bitshift_conv_hexa((unsigned long)
				va_arg(list, void *), bytes, str);
	return (bytes);
}

int	conv_decimal(char *str, int bytes, va_list list)
{
	if (*str == 'd' || *str == 'i' || *str == 'u')
		bytes = ft_putnbr(va_arg(list, int), str);
	return (bytes);
}
