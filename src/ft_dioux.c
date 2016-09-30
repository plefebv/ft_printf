/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dioux.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:57:48 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/27 16:36:20 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_dioux(void *ap, t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i')
		ft_di(ap, info);
	else if (info->letter == 'u')
		ft_u(ap, info);
	else if (info->letter == 'x' || info->letter == 'X' || info->letter == 'p')
		ft_hex(ap, info);
	else if (info->letter == 'o')
		ft_octal(ap, info);
}
