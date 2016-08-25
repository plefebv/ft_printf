/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:14:13 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/25 13:11:24 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_work(void *ap, t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i' || info->letter == 'o'
			|| info->letter == 'u' || info->letter == 'x' 
			|| info->letter == 'X')
		ft_dioux(ap, info);
//	if (info->letter == 's')
}
