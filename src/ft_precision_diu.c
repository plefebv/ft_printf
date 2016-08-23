/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_diu.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:40:25 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/23 17:14:42 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int			ft_size_nbr(char *s)
{
	int		i;

	i = 0;
	while (ft_isdigit(s[i]))
			i++;
	return (i);
}

void		ft_precision_dioux(t_info *info)
{
	int		size;

	size = ft_size_nbr(info->lst->data);
	if (size < precision)
	{
		if (ft_strchr(info->flags, '-'))
			ft_add_precision_dioux(info);
	}
}
