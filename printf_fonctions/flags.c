/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:24:13 by mchampag          #+#    #+#             */
/*   Updated: 2021/11/16 10:24:14 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	check_flag(char *str, int bytes, va_list list)
{
	while (*str)
	{
		if (*str == '%')
			bytes += check_conversion(++str, bytes, list);
		else
			bytes += ft_putchar(*str);
		str++;
	}
	return (bytes);
}
