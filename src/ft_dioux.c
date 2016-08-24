/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dioux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:57:48 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/24 17:25:17 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_dioux_length(void *ap, t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i')
		ft_di(ap, info, NULL);
	else if (info->letter == 'u')
		info->length ? ft_u_length(ap, info) :
		ft_put_in_lst(info, ft_itoa_ull((unsigned)ap, info));
/*	else if (info->letter == 'o')
		info->length ? ft_o_length(ap, info) :
		ft_put_in_lst(info, ft_itoa_o((unsigned)ap, info));
	else if (info->letter == 'x')
		info->length ? ft_x_length(ap, info) :
		ft_put_in_lst(info, ft_itoa_x((unsigned)ap, info));*/
}

void		ft_u_length(void *ap, t_info *info)
{
	if (ft_strcmp("hh", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned char)ap, info));
	if (ft_strcmp("h", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned short)ap, info));
	if (ft_strcmp("l", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned long)ap, info));
	if (ft_strcmp("ll", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned long long)ap, info));
	if (ft_strcmp("j", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((uintmax_t)ap, info));
	if (ft_strcmp("z", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((size_t)ap, info));
}

void		ft_di(void *ap, t_info *info, char *ret)
{
	info->length ? ft_di_length(ap, info) :
	ft_put_in_lst(info, ft_itoa_ll((signed)ap, info));
	if (info->true_precision)
		ft_precision_dioux(info);
	if (info->minfield > 0)
		ft_minfield(info);
	ft_add_sign_diu(info);
	ret = info->lst->data;
}

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
