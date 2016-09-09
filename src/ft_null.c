/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_null.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 15:53:50 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/09 15:56:51 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char			*trickydup(char *s)

void			ft_put_in_lst_null(t_info *info, char *input)
{
	if (info->lst_first->data == NULL)
	{
		info->lst->data = trickydup(input);
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
