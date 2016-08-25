/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_sign.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 13:14:57 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/25 12:55:20 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_isupper0(char c)
{
	if (c > '0' && c <= '9')
		return (1);
	return (0);
}

void		ft_add_space_diu(t_info *info)
{
	int	i;
	
	i = 0;
	if (info->lst->data && ft_isupper0(info->lst->data[i]))
		info->lst->data = ft_strjoin(" ", info->lst->data);
	else
	{
		while (info->lst->data[i] && !(ft_isdigit(info->lst->data[i])))
			i++;
		if (i > 0 && info->lst->data[i] && ft_isdigit(info->lst->data[i]))
			info->lst->data[i - 1] = ' ';
		else
			info->lst->data[0] = ' ';
	}
}

void		ft_add_negative_di(t_info *info)
{
	int	i;
	
	i = 0;
	if (info->lst->data && ft_isupper0(info->lst->data[i]))
		info->lst->data = ft_strjoin("-", info->lst->data);
	else
	{
		while (info->lst->data[i] && !(ft_isdigit(info->lst->data[i])))
			i++;
		if (i > 0 && info->lst->data[i] && ft_isdigit(info->lst->data[i]))
			info->lst->data[i - 1] = '-';
		else
			info->lst->data[0] = '-';
	}
}


void		ft_add_positive_diu(t_info *info)
{
	int	i;
	
	i = 0;
	if (info->lst->data && ft_isupper0(info->lst->data[i]))
		info->lst->data = ft_strjoin("+", info->lst->data);
	else
	{
		while (info->lst->data[i] && !(ft_isdigit(info->lst->data[i])))
			i++;
		if (i > 0 && info->lst->data[i] && ft_isdigit(info->lst->data[i]))
			info->lst->data[i - 1] = '+';
		else
			info->lst->data[0] = '+';
	}
}

void		ft_add_sign_diu(t_info *info)
{
	int	i;

	i = 0;
	if (info->sign == '-')
		ft_add_negative_di(info);
	if (info->flags != NULL)
	{
		if (info->sign == '+' && ft_strchr(info->flags, '+'))
			ft_add_positive_diu(info);
		if (info->sign == '+' && ft_strchr(info->flags, ' ') && !(ft_strchr(info->flags, '+')))
			ft_add_space_diu(info);
	} 
}

