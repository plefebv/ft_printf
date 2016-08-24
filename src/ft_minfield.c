/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minfield.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 12:41:15 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/24 18:18:40 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_add_minfield_l(t_info *info, int add, char c)
{
}

void		ft_add_minfield_r(t_info *info, int add, char c)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (add + 1));
	if (s)
	{
		s[add] = '\0';
		ft_add_char(&s, add, c);
		info->lst->data = ft_strjoin(s, info->lst->data);
		ft_memdel((void **)&s);
	}
}

void		ft_minfield(t_info *info)
{
	int		size;

	size = ft_strlen(info->lst->data);
	//if (info->sign == '-' || (info->flags && info->sign == '+' 
	//		&& (ft_strchr(info->flags, ' ') || ft_strchr(info->flags, '+'))))
	//	(info->minfield)--;
	if (size < info->minfield)
	{
		size = info->minfield - size;
		if (info->flags && ft_strchr(info->flags, '-'))
			ft_add_minfield_l(info, size, ' ');
		else if (info->flags && ft_strchr(info->flags, '0') && !info->true_precision)
			ft_add_minfield_r(info, size, '0');
		//else if ()
		else
			ft_add_minfield_r(info, size, ' ');
	}
}
