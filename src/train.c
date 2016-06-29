/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 18:10:26 by plefebvr          #+#    #+#             */
/*   Updated: 2016/06/16 17:07:01 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft/includes/libft.h"
#include <stdarg.h>
#include <stdio.h>

/*void	ft_print_arg(char *fmt, ...)
{
	va_list 	ap;
	char		*str;

	va_start(ap, fmt);
	ft_putstr(fmt);
	while ((str = va_arg(ap, char *)) != 0)
		ft_putstr(str);
	va_end(ap);
}*/

int		main(void)
{
	printf( "|%3i|%-+ 4i|", 12, 12);	
	//ft_print_arg("je suis un chevreuil ", "qui a pris ", "un peu ", "de poid");
	return (0);
}
