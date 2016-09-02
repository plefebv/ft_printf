/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 14:02:56 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/01 16:06:06 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
/*
void			ft_char_minfield(t_info *info, int left)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * info->minfield);
	if (s)
	{
		s[info->minfield - 1] = '\0';
		if (!left)
		{
			if (info->flags && ft_strchr(info->flags, '0'))
				ft_add_char(&s, info->minfield - 1, '0');
			else
				ft_add_char(&s, info->minfield - 1, ' ');
			info->lst->data = ft_strjoin(s, info->lst->data);
		}
		else
		{
			ft_add_char(&s, info->minfield - 1, ' ');
			info->lst->data = ft_strjoin(info->lst->data, s);
		}
		ft_memdel((void **)&s);
	}
}*/

void			ft_sc(void *ap, t_info *info)
{
	if (info->letter == 'c')
	{
		if (info->length && ft_strcmp("l", info->length) == 0)
			ft_put_wc((wchar_t)ap, info);
		else
			ft_put_char((char)ap, info);
	}
	if (info->letter == 's')
	{
		if (info->length && ft_strcmp("l", info->length) == 0)
			ft_put_ws((wchar_t *)ap, info);
		else
			ft_put_in_lst(info, (char *)ap);
	}
}	
