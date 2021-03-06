/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 13:04:59 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/27 16:37:05 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_u_length(void *ap, t_info *info)
{
	if (ft_strcmp("hh", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned char)ap));
	if (ft_strcmp("h", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned short)ap));
	if (ft_strcmp("l", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned long)ap));
	if (ft_strcmp("ll", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((unsigned long long)ap));
	if (ft_strcmp("j", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((uintmax_t)ap));
	if (ft_strcmp("z", info->length) == 0)
		ft_put_in_lst(info, ft_itoa_ull((size_t)ap));
}

void		ft_u(void *ap, t_info *info)
{
	int		i;

	i = 0;
	info->length ? ft_u_length(ap, info) :
		ft_put_in_lst(info, ft_itoa_ull((unsigned)ap));
	if (info->true_precision)
		ft_precision_dioux(ap, info);
	if (info->minfield > 0)
		ft_minfield(info);
}
