/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:14:13 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/06 01:56:41 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_dioux(void *ap, t_info *info)
{
	if (ft_strcmp("hh", info->lenght) == 0)
		if (info->letter == 'd' || info->letter == 'i')
			ft_put_in_lst(info, ft_itoa((int)(char)ap));
		else
			ft_put_in_lst(info, ft_itoa((int)(unsigned char)ap));
	else if (ft_strcmp("h", info->lenght) == 0)
		if (info->letter == 'd' || info->letter == 'i')

}

void		ft_work(void *ap, t_info *info)
{

	if (info->letter == 'd' || info->letter == 'i' || info->letter == 'o'
			|| info->letter == 'u' || info->letter == 'x' 
			|| info->letter == 'X')
		ft_dioux(ap, info);
}
