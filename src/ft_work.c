/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:14:13 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/12 17:47:33 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_dioux(void *ap, t_info *info)
{
	if (info->lenght)
		ft_dioux_lenght(ap, info);
	else
		ft_put_in_lst(info, ft_itoa_test((int)ap, info));
	if (..............................................)
}

void		ft_dioux_lenght(void *ap, t_info *info)
{
	if (ft_strcmp("hh", info->lenght) == 0)
		ft_put_in_lst(info, ft_dio(info) ? ft_itoa_test((int)(char)ap, info) :
				ft_itoa_test((int)(char)ap, info));
	else if (ft_strcmp("h", info->lenght) == 0)
		ft_put_in_lst(info, ft_dio(info) ? ft_itoa_ll((int)(short)ap, info) :
				ft_itoa_ll((int)(unsigned short)ap, info));
	else if (ft_strcmp("l", info->lenght) == 0)
		ft_put_in_lst(info, ft_dio(info) ? ft_itoa_ll((long)ap, info) :
				ft_itoa_ll((unsigned long)ap, info));
	else if (ft_strcmp("ll", info->lenght) == 0)
		ft_put_in_lst(info, ft_dio(info) ? ft_itoa_ll((long long)ap, info) :
				ft_itoa_ll((unsigned long long)ap, info));
	else if (ft_strcmp("j", info->lenght) == 0)
		ft_put_in_lst(info, ft_dio(info) ? ft_itoa_ll((intmax_t)ap, info) :
				ft_itoa_ll((uintmax_t)ap, info));
	else if (ft_strcmp("z",info->lenght) == 0)
		ft_put_in_lst(info, ft_itoa_ll((int)(size_t)ap, info));
}

void		ft_work(void *ap, t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i' || info->letter == 'o'
			|| info->letter == 'u' || info->letter == 'x' 
			|| info->letter == 'X')
		ft_dioux(ap, info);
}
