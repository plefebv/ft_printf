/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 18:02:07 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/14 03:03:18 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_stars(int value, t_info *info)
{
	if (info->star_minfield)
	{
		info->minfield = value;
		(info->star_minfield)--;
		(info->stars)--;
	}
	else if (info->star_precision)
	{
		info->precision = value;
		(info->star_precision)--;
		(info->stars)--;
	}
}

void		ft_clean_info(t_info *info)
{
	if (info->flags)
		ft_memdel((void **)&info->flags);
	info->minfield = 0;
	info->star_minfield = 0;
	info->true_precision = 0;
	info->precision = 0;
	info->star_precision = 0;
	if (info->length)
		ft_memdel((void **)&info->length);
	info->letter = '?';
	info->stars = 0;
	info->sign = '+';
}

void		ft_epur_fmt(t_info *info, const char *fmt, int *i)
{
	int		tmp;
	char	*data;

	tmp = *i;
	data = NULL;
	while (fmt[*i] && fmt[*i] != '%')
	*i += 1;
	data = ft_strsub(fmt, tmp, *i - tmp);
	ft_put_in_lst(&info[0], data);
}

int			ft_dio(t_info *info)
{
	if (info->letter == 'd' || info->letter == 'i')
		return (1);
	return (0);
}

int			ft_cih(char *s, int c)
{
	int		i;
	i = 0;

	while (s[i] && s[i] != c)
		i++;
	if (!s[i])
		return (0);
	return (1);
}
