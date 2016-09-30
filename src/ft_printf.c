/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 03:00:16 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/27 20:55:36 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_printf(const char *fmt, ...)
{
	t_info		info;
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, fmt);
	ft_init_strct(&info);
	while (fmt && fmt[i] != '\0')
	{
		ft_epur_fmt(&info, fmt, &i);
		if (fmt[i] && fmt[i] == '%')
		{
			ft_parse_arg(fmt, &i, &info, ap);
			ft_work(info.letter != '%' ? va_arg(ap, void *) : NULL, &info);
			ft_clean_info(&info);
		}
	}
	va_end(ap);
	return (ft_print_list(&info));
}
