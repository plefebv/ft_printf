/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 18:04:25 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/23 15:41:57 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_put_flag(const char *fmt, int *i, t_info *info)
{
	int		tmp;

	tmp = *i;
	while (fmt[*i + 1] == '-' || fmt[*i + 1] == '+' || fmt[*i + 1] == ' ' 
			|| fmt[*i + 1] == '#' || fmt[*i + 1] == '0')
		*i += 1;
	if (*i > tmp)
		info->flags = ft_strsub(fmt, tmp + 1, *i - tmp);
	else
		info->flags = NULL;
}

void		ft_put_mfw(const char *fmt, int *i, t_info *info)
{
	int		tmp;
	char	*str;

	tmp = *i;
	str = NULL;
	while ((ft_isdigit(fmt[*i + 1])))
		(*i)++;
	if (fmt[*i + 1] == '*')
	{
		(info->star_minfield)++;
		(info->stars)++;
		(*i)++;
	}
	else if (*i > tmp)
	{
		str = ft_strsub(fmt, tmp + 1, *i - tmp);
		info->minfield = ft_atoi(str);
		ft_memdel((void **)&str);
	}
	else
		info->minfield = 0;
}

void		ft_put_precision(const char *fmt, int *i, t_info *info)
{
	int		tmp;
	char	*str;

	tmp = *i;
	str = NULL;
	if (fmt[*i + 1] == '.')
	{
		info->true_precision = 1;
		(*i)++;
		while ((ft_isdigit(fmt[*i + 1])))
			(*i)++;
		if (fmt[*i + 1] == '*')
		{
			(info->star_precision)++;
			(info->stars)++;
			(*i)++;
		}
		else if (tmp < *i)
		{
			str = ft_strsub(fmt, tmp + 2, *i - tmp - 1);
			info->precision = ft_atoi(str);
			ft_memdel((void**)&str);
		}
	}
}

void		ft_put_length(const char *fmt, int *i, t_info *info)
{
	int tmp;

	tmp = *i;
	if (fmt[*i + 1] == 'h' && fmt[*i + 2] == 'h')
	{
		*i += 2;
		info->length = ft_strdup("hh");
	}
	if (fmt[*i + 1] == 'l' && fmt[*i + 2] == 'l')
	{
		*i += 2;
		info->length = ft_strdup("ll");
	}
	if (fmt[*i + 1] == 'h' || fmt[*i + 1] == 'l' || fmt[*i + 1] == 'j'
			|| fmt[*i + 1] == 'z')
	{
		(*i)++;
		info->length = ft_strsub(&fmt[*i], 0, 1);
	}
}

void		ft_parse_arg(const char *fmt, int *i, t_info *info)
{
		ft_put_flag(fmt, i, info);
		ft_put_mfw(fmt, i, info);
		ft_put_precision(fmt, i, info);
		ft_put_length(fmt, i, info);
		//while (fmt[*i] == ' ')
		//	*i += 1;
		ft_put_letter(fmt, i, info);
}
