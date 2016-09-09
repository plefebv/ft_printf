/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 12:40:04 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/09 23:41:26 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


t_lst		*ft_create_link(char *input)
{
	t_lst		*ret;

	ret = (t_lst*)malloc(sizeof(t_lst));
	if (ret)
	{
		ret->data = ft_strdup(input);
		ret->next = NULL;
	}
	return (ret);
}

void		ft_put_in_lst(t_info *info, char *input)
{
	if (info->lst_first->data == NULL)
	{
		info->lst->data = ft_strdup(input);
		info->lst_first = info->lst;
	}
	else
	{
		while (info->lst->next)
			info->lst = info->lst->next;
		info->lst->next = ft_create_link(input);
		info->lst = info->lst->next;
	}
}

int			ft_print_list(t_info *info)
{
	t_lst	*tmp;
	int		i;
	char	*str;
	int		rien = 0;

	i = 0;
	info->lst = info->lst_first;
	str = NULL;
	if (!info->lst->data)
	{
		return (0);
	}
	else if (!info->lst_first)
	{
		ft_putstr("0\n");
		return (0);
	}
	while (info->lst)
	{
		if (str == NULL)
		{
			//ft_putstr("SUUUUUB = ");
			str = ft_strsub_spe(info, info->lst->ret, 0);
		}
		else
		{
			str = ft_strjoin_spe(str, info, i, 0);
		}
		i = info->lst->ret;
		info->lst = info->lst->next;
	}
	if (i)
	{
		if (str)
			info->ret++;
	}
	if (info->ret > 0)
	{
		write(1, str, info->ret);
	}
	return (info->ret + info->ret_c);
}

/*t_lst		*ft_create_list(const char *fmt)
{
	t_arg				*strct;
	t_lst				*lst;
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	lst = NULL;
	while (fmt[i] != '\0')
	{
		ft_go_to_index(fmt, &i, &j);
		if (!fmt[i + j + 1])
			ft_put_in_lst(&lst, ft_strsub(fmt, i, j + 1));
		else if (fmt[i + j] == '%' && ft_isflag(fmt[i + j + 1]))
		{
			if (j > 0)
				ft_put_in_lst(&lst, ft_strsub(fmt, i, j));
		}
		i++;
	}
	return (lst);
}*/
