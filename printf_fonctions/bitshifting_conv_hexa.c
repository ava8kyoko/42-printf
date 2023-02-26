/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitshifting_conv_hexa.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:23:46 by mchampag          #+#    #+#             */
/*   Updated: 2021/11/16 10:39:44 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	find_character(int value, char *str)
{
	if (value >= 0 && value < 10)
		return ('0' + value);
	if (*str == 'X')
		return ('A' + value - 10);
	else
		return ('a' + value - 10);
}

int	bitshift_conv_hexa(unsigned long number, int bytes, char *str)
{
	int				i;
	int				len;
	unsigned long	quotien;

	bytes = 0;
	len = 0;
	quotien = number;
	// Because x, not lx
	if (*str == 'x' || *str == 'X')
		quotien = (unsigned int)quotien;
	if (quotien == 0)
		len = 1;
	while (quotien > 0)
	{
		quotien /= 16;
		len++;
	}
	if (*str == 'p')
		bytes += ft_putstr("0x");
	i = (sizeof(void *) << 3) - (4 * (17 - len));
	while (i >= 0)
	{
		bytes += ft_putchar(find_character((number >> i) & 0xf, str));
		i -= 4;
	}
	return (bytes);
}
