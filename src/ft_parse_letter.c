/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_letter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 15:16:17 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/07 14:50:44 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_put_letter(const char *fmt, int *i, t_info *info)
{
	char	c;

	c = fmt[*i + 1];
	if (c == '+')
	{
		info->flags = info->flags ? ft_strjoin(info->flags, "+") : ft_strdup("+");
		c = fmt[++(*i) + 1];
	}
	if (c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'o'
			|| c == 'u' || c == 'x' || c == 'X'
			|| c == 'c' || c == '%')
	{
		(*i)++;
		info->letter = c;
		if (c == '%')
		{
			(*i)++;
			ft_put_in_lst(&info[0], "%");
		}
		else
			(*i)++;
	}
	else if (c == 'D' || c == 'O' || c == 'U' || c == 'S' || c == 'C')
	{
		ft_special_letter(info, c);
		*i += 2; 
	}
	else
		(*i)++;
}

void		ft_special_letter2(t_info *info, char c)
{
	if (c == 'S')
	{
		info->letter = 's';
		if (info->length != NULL)
			free(info->length);
		info->length = ft_strdup("l");
	}
	if (c == 'C')
	{
		info->letter = 'c';
		if (info->length != NULL)
			free(info->length);
		info->length = ft_strdup("l");
	}
}

void		ft_special_letter(t_info *info, char c)
{
	if (c == 'D')
	{
		info->letter = 'd';
		if (info->length != NULL)
			free(info->length);
		info->length = ft_strdup("l");
	}
	if (c == 'O')
	{
		info->letter = 'o';
		if (info->length != NULL)
			free(info->length);
		info->length = ft_strdup("l");
	}
	if (c == 'U')
	{
		info->letter = 'u';
		if (info->length != NULL)
			free(info->length);
		info->length = ft_strdup("l");
	}
	ft_special_letter2(info, c);
}
