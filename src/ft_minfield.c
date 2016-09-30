/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minfield.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 12:41:15 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/27 16:53:02 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_add_minfield_l(t_info *info, int add, char c)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (add + 1));
	if (s)
	{
		s[add] = '\0';
		if (info->letter != 'u')
		{
			if (info->sign == '-' || (info->flags && info->sign == '+' &&
				(ft_strchr(info->flags, ' ') || ft_strchr(info->flags, '+'))))
				add--;
		}
		ft_add_char(&s, add, c);
		info->lst->data = ft_strjoin_f(info->lst->data, s);
	}
}

void		ft_add_minfield_r(t_info *info, int add, char c)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (add + 1));
	if (s)
	{
		s[add] = '\0';
		ft_add_char(&s, add, c);
		info->lst->data = ft_strjoin_f(s, info->lst->data);
	}
}

void		ft_minfield(t_info *info)
{
	int		size;

	size = ft_strlen(info->lst->data);
	if (size < info->minfield)
	{
		size = info->minfield - size;
		if ((info->flags && ft_strchr(info->flags, '-')
					&& info->letter != 'p') ||
					(info->letter == 'p' && info->flags &&
					ft_strchr(info->flags, '0')
					&& !(ft_strcmp(info->lst->data, "0x0"))))
			ft_add_minfield_l(info, size, info->letter == 'p' ? '0' : ' ');
		else if (info->flags && ft_strchr(info->flags, '-')
					&& info->letter == 'p')
			ft_add_minfield_l(info, size, ' ');
		else if (info->flags && ft_strchr(info->flags, '0') &&
					(((!info->true_precision || info->precision < 0)
					&& info->letter != 's')
					|| (info->letter == 'c' || info->letter == 's')))
			ft_add_minfield_r(info, size, '0');
		else
			ft_add_minfield_r(info, size, ' ');
	}
}
