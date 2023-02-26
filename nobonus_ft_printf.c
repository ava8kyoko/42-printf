/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nobonus_ft_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 10:23:09 by mchampag          #+#    #+#             */
/*   Updated: 2021/11/16 10:42:58 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
===== MANDATORY =====
Nom du programme : libftprintf.a
Fichiers de rendu : *.c, * \/\*.c, *.h, *\/\*.h, Makefile
Makefile : all, clean, fclean, re, bonus
Fonctions externes autorisées :
	malloc, free, write, va_start, va_arg, va_copy,va_end
Libft autorisée : yes
Description : Une librairie qui contient ft_printf, une fonction
	qui marche comme le vrai printf

===== BONUS =====
Gérer toute combinaison des drapeaux suivants : ’-0.’ et la largeur minimale
	du champ avec toutes les conversions.
Gérez tous les flags suivants : ’# +’ (oui espace est un flag valide)
*/

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	list;
	char	*str;
	int		bytes;

	bytes = 0;
	va_start(list, format);
	str = (char *)format;
	bytes = check_flag(str, bytes, list);
	va_end(list);
	return (bytes);
}
