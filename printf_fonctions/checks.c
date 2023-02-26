/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audrey.42qc <audrey.42qc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:23:54 by mchampag          #+#    #+#             */
/*   Updated: 2021/11/22 16:12:14 by audrey.42qc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	check_conversion(char *str, int bytes, va_list list)
{
	bytes = conv_character(str, bytes, list);
	bytes = conv_string(str, bytes, list);
	bytes = conv_hexa(str, bytes, list);
	bytes = conv_decimal(str, bytes, list);
	return (bytes);
}
