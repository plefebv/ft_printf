/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:03:51 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/25 13:50:35 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_di_length(void *ap, t_info *info)
{
	if (ft_strcmp("hh", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ll((char)ap, info));
	else if (ft_strcmp("h", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ll((short)ap, info));
	else if (ft_strcmp("l", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ll((long)ap, info));
	else if (ft_strcmp("ll", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ll((long long)ap, info));
	else if (ft_strcmp("j", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ll((intmax_t)ap, info));
	else if (ft_strcmp("z",info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ll((size_t)ap, info));
}

void		ft_di(void *ap, t_info *info)
{
	info->length ? ft_di_length(ap, info) :
	ft_put_in_lst(info, ft_itoa_ll((signed)ap, info));
	if (info->true_precision)
		ft_precision_dioux(info);
	if (info->minfield > 0)
		ft_minfield(info);
	ft_add_sign_diu(info);
}
