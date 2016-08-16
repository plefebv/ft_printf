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
		ft_put_in_lst(info, ft_itoa_ull((char)ap, info));
	ft_putnbr((int)(char)ap);
	if (ft_strcmp("h", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((short)ap, info));
	if (ft_strcmp("l", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((long)ap, info));
	if (ft_strcmp("ll", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((long long)ap, info));
	if (ft_strcmp("j", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((intmax_t)ap, info));
	if (ft_strcmp("z", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((size_t)ap, info));
}

void		ft_di(void *ap, t_info *info, char *ret)
{
	info->length ? ft_di_length(ap, info) :
	ft_put_in_lst(info, ft_itoa_ll((signed)ap, info));
	ft_putstr(info->lst->next);
	ft_add_sign_di(info);
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
