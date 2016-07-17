/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dioux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:57:48 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/05 23:16:02 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_dioux(void *ap, t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i')
		info->lenght ? ft_di_lenght(ap, info) :
		ft_put_in_lst(info, ft_itoa_ll((signed)ap, info));
	else if (info->letter == 'u')
		info->lenght ? ft_u_lenght(ap, info) :
		ft_put_in_lst(info, ft_itoa_ull((unsigned)ap, info));
/*	else if (info->letter == 'o')
		info->lenght ? ft_o_lenght(ap, info) :
		ft_put_in_lst(info, ft_itoa_o((unsigned)ap, info));
	else if (info->letter == 'x')
		info->lenght ? ft_x_lenght(ap, info) :
		ft_put_in_lst(info, ft_itoa_x((unsigned)ap, info));*/
}

void		ft_di_lenght(void *ap, t_info *info)
{
	if (ft_strcmp("hh", info->lenght) == 0)
		ft_put_in_lst(info, ft_itoa_ll((char)ap, info));
	else if (ft_strcmp("h", info->lenght) == 0)
		ft_put_in_lst(info, ft_itoa_ll((short)ap, info));
	else if (ft_strcmp("l", info->lenght) == 0)
		ft_put_in_lst(info, ft_itoa_ll((long)ap, info));
	else if (ft_strcmp("ll", info->lenght) == 0)
		ft_put_in_lst(info, ft_itoa_ll((long long)ap, info));
	else if (ft_strcmp("j", info->lenght) == 0)
		ft_put_in_lst(info, ft_itoa_ll((intmax_t)ap, info));
	else if (ft_strcmp("z",info->lenght) == 0)
		ft_put_in_lst(info, ft_itoa_ull((size_t)ap, info));
}
