/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dioux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:57:48 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/25 13:39:19 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_dioux(void *ap, t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i')
		ft_di(ap, info);
	else if (info->letter == 'u')
		ft_u(ap, info);
/*	else if (info->letter == 'o')
		info->length ? ft_o_length(ap, info) :
		ft_put_in_lst(info, ft_itoa_o((unsigned)ap, info));
	else if (info->letter == 'x')
		info->length ? ft_x_length(ap, info) :
		ft_put_in_lst(info, ft_itoa_x((unsigned)ap, info));*/
}
