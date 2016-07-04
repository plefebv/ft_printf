/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 18:04:25 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/04 16:10:55 by plefebvr         ###   ########.fr       */
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
		ft_putendl(str);
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
			ft_putendl(str);
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
		info->lenght = ft_strdup("hh");
	}
	if (fmt[*i + 1] == 'l' && fmt[*i + 2] == 'l')
	{
		*i += 2;
		info->lenght = ft_strdup("ll");
	}
	if (fmt[*i + 1] == 'h' || fmt[*i + 1] == 'l' || fmt[*i + 1] == 'j'
			|| fmt[*i + 1] == 'z')
	{
		(*i)++;
		info->lenght = ft_strsub(&fmt[*i], 0, 1);
	}
}

void		ft_put_letter(const char *fmt, int *i, t_info *info)
{
	char	c;

	c = fmt[*i + 1];
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' || c == 'D'
			|| c == 'i' || c == 'o' || c == 'O' || c == 'u' || c == 'U'
			|| c == 'x' || c == 'X' || c == 'c' || c == 'C' || c == '%')
	{
		(*i)++;
		info->letter = c;
		if (c == '%')
		{
			(*i)++;
			ft_put_in_lst(&info[0], "%%");
		}
		else
			(*i)++;
	}
}

void		ft_parse_arg(const char *fmt, int *i, t_info *info)
{
		ft_put_flag(fmt, i, info);
		ft_put_mfw(fmt, i, info);
		ft_put_precision(fmt, i, info);
		ft_put_length(fmt, i, info);
		while (fmt[*i] == ' ')
			*i += 1;
		ft_put_letter(fmt, i, info);
}
