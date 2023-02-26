/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audrey.42qc <audrey.42qc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:22:46 by mchampag          #+#    #+#             */
/*   Updated: 2021/11/22 16:11:41 by audrey.42qc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h> // special types min max
# include <stdio.h> // malloc, free
# include <stdlib.h> // malloc
# include <string.h>
# include <unistd.h> // write
# include <stdarg.h> // va_start, va_arg, va_copy, va_end

int		ft_printf(const char *format, ...);

// libft_for_printf/len.c
size_t	ft_strlen(const char *str);

// libft_for_printf/put_write.c
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(long number, char *str);

// printf_fonctions/bitshifting_conv_hexa.c
char	find_character(int value, char *str);
int		bitshift_conv_hexa(unsigned long number, int bytes, char *str);

// printf_fonctions/checks.c
int		check_conversion(char *str, int bytes, va_list list);

// printf_fonctions/conversions.c
int		conv_character(char *str, int bytes, va_list list);
int		conv_string(char *str, int bytes, va_list list);
int		conv_hexa(char *str, int bytes, va_list list);
int		conv_decimal(char *str, int bytes, va_list list);

// printf_fonctions/flags.c
int		check_flag(char *str, int bytes, va_list list);

#endif
