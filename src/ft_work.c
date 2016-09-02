/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:14:13 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/01 12:39:42 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_work(void *ap, t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i' || info->letter == 'o'
			|| info->letter == 'u' || info->letter == 'x' 
			|| info->letter == 'X')
		ft_dioux(ap, info);
	else if (info->letter == 'c' || info->letter == 's')
		ft_sc(ap, info);

}
