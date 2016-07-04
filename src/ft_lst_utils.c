/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 12:40:04 by plefebvr          #+#    #+#             */
/*   Updated: 2016/06/29 04:13:44 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


t_lst		*ft_create_link(char *input)
{
	t_lst		*ret;

	ret = (t_lst*)malloc(sizeof(t_lst));
	if (ret)
	{
		ret->data = input;
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
	}
	info->ret += ft_strlen(input);
}

int			ft_print_list(t_info *info)
{
	t_lst	*tmp;
	int		count;

	count = 0;
	tmp = info->lst_first;
	if (!tmp)
	{
		ft_putstr("0\n");
		return (0);
	}
	while (tmp)
	{
		ft_putstr(" |");
		ft_putstr(tmp->data);
		count += ft_strlen(tmp->data);
		tmp = tmp->next;
		ft_putstr("| ");
	}
	return (count);
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
