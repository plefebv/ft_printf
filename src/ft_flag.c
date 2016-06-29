/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 18:03:25 by plefebvr          #+#    #+#             */
/*   Updated: 2016/06/27 08:55:35 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_isletter(char c)
{
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' || c == 'D' || c == 'i'
			|| c == 'o' || c == 'O' || c == 'u' || c == 'U' || c  == 'x'
			|| c == 'X' || c == 'c' || c == 'C' || c == '%')
		return (1);
	return (0);
}


/*void		ft_check_flag(char *fmt, int *i, char *dest)
{
	if (fmt[*i] == '-' || fmt[*i] == '+' || fmt[*i] == '#' || fmt[*i] == ' '
			|| fmt[*i])
}*/
