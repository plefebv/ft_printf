/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 03:00:16 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/07 01:52:15 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ft_printf.h"

void		ft_print_info(t_info *info)
{
	ft_putendl("   +=+=+=+ %%%%% +=+=+=+");
	ft_putstr("Valeur flags = ");
	if (info->flags)
		ft_putendl(info->flags);
	else
		ft_putchar('\n');
	ft_putstr("Valeur minfield = ");
	ft_nbrendl(info->minfield);
	ft_putstr("Valeur star_minfield = ");
	ft_nbrendl(info->star_minfield);
	ft_putstr("Valeur true_precision = ");
	ft_nbrendl(info->true_precision);
	ft_putstr("Valeur precision = ");
	ft_nbrendl(info->precision);
	ft_putstr("Valeur star_precision = ");
	ft_nbrendl(info->star_precision);
	ft_putstr("Valeur lenght = ");
	if (info->lenght)
		ft_putendl(info->lenght);
	else
		ft_putchar('\n');
	ft_putstr("Valeur letter = ");
	if (info->letter)
		ft_putchar(info->letter);
	else
		ft_putchar('\n');
	ft_putchar('\n');
	ft_putstr("Valeur Stars = ");
	ft_nbrendl(info->stars);
	ft_putstr("Valeur ret = ");
	ft_nbrendl(info->ret);
	ft_putstr("Valeur sign = ");
	ft_putchar(info->sign);
	ft_putstr("\n\n");
}

int			ft_printf(const char *fmt, ...)
{
	t_info		info;
	va_list		ap;
	int			i;

	i = 0;
	va_start(ap, fmt);
	ft_init_strct(&info);
	while (fmt[i] != '\0')
	{
		ft_epur_fmt(&info, fmt, &i);
		if (fmt[i] && fmt[i] == '%')
		{
			ft_parse_arg(fmt, &i, &info);
			while (info.stars > 0)
				ft_stars(va_arg(ap, int), &info);
			ft_work(va_arg(ap, char *), &info);
			ft_print_info(&info);
			ft_clean_info(&info);
		}
	}
	return (ft_print_list(&info));
}
