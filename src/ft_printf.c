/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 03:00:16 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/07 16:09:01 by plefebvr         ###   ########.fr       */
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
	ft_putstr("Valeur length = ");
	if (info->length)
		ft_putendl(info->length);
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
	while (fmt && fmt[i] != '\0')
	{
	//	ft_putstr("i:1 = ");
	//	ft_nbrendl(i);
		ft_epur_fmt(&info, fmt, &i);
	//	ft_putstr("i:2 = ");
	//	ft_nbrendl(i);
		if (fmt[i] && fmt[i] == '%')
		{
	//		ft_putstr("i:3 = ");
	//		ft_nbrendl(i);
			ft_parse_arg(fmt, &i, &info);
	//		ft_putstr("i:3.2 = ");
	//		ft_nbrendl(i);
			while (info.stars > 0)
				ft_stars(va_arg(ap, int), &info);	
	//		ft_putstr("i:3.3 = ");
	//		ft_nbrendl(i);
			ft_work(va_arg(ap, void *), &info);
//			ft_print_info(&info);
	//		ft_putstr("i:4 = ");
	//		ft_nbrendl(i);		
			ft_clean_info(&info);
		}
	//	ft_putstr("i:5 = ");
	//	ft_nbrendl(i);
	}
	va_end(ap);
	//ft_putendl("choucroute");
	return (ft_print_list(&info));
}
