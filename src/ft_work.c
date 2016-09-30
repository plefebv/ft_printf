/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_work.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 19:14:13 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/28 19:16:39 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void				ft_work(void *ap, t_info *info)
{
	char *s;

	s = NULL;
	if (info->letter == 'd' || info->letter == 'i' || info->letter == 'o'
			|| info->letter == 'u' || info->letter == 'x'
			|| info->letter == 'X' || info->letter == 'p')
		ft_dioux(ap, info);
	else if (info->letter == 'c' || info->letter == 's')
		ft_sc(ap, info);
	else if (info->letter == '%' && (info->minfield))
		ft_treat_data(info);
	else if (info->letter != '?')
	{
		s = ft_strnew(1);
		s[0] = info->letter;
		ft_put_in_lst(info, s);
		ft_treat_data(info);
	}
}

void				ft_treat_data(t_info *info)
{
	if (info->minfield > 0 &&
			!(info->letter == 'd' || info->letter == 'i' || info->letter == 'o'
			|| info->letter == 'u' || info->letter == 'X' || info->letter == 'x'
			|| info->letter == 's'))
	{
		pf_char_minfield(info, (info->flags &&
					ft_strchr(info->flags, '-')) ? 1 : 0);
		if (info->letter == '%')
		{
			if (info->flags && ft_strchr(info->flags, '-'))
				info->lst->data = ft_strjoin_f2("%", info->lst->data);
			else
				info->lst->data = ft_strjoin_f1(info->lst->data, "%");
		}
	}
}

void				pf_hex2(void *ap, t_info *info)
{
	if ((info->flags && ft_strchr(info->flags, '#') &&
				((info->lst->data[0] != '0' &&
				info->letter != 'p'))) || info->letter == 'p')
		info->lst->data = (info->letter == 'x' || info->letter == 'p' ?
				ft_strjoin_f2("0x", info->lst->data) :
				ft_strjoin_f2("0X", info->lst->data));
	if (info->true_precision && !(info->flags && ft_strchr(info->flags, '#')))
		ft_precision_dioux(ap, info);
	if (info->true_precision && (info->letter == 'p' || (info->letter != 'p'
					&& info->flags && ft_strchr(info->flags, '#'))))
		ft_precision_p(ap, info);
	if (info->true_precision && info->letter == 'p'
			&& !info->precision && (int)ap == 0)
		info->lst->data = ft_strdup("0x");
	if (info->minfield > 0)
		ft_minfield(info);
}
