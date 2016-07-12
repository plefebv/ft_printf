/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 19:19:05 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/12 15:43:06 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			ft_init_lst(t_info *strct)
{
	t_lst	*lst;

	lst = (t_lst *)malloc(sizeof(t_lst));
	if (lst)
	{
		lst->data = NULL;
		lst->ret = 0;
		lst->next = NULL;
		strct->lst = lst;
		strct->lst_first = lst;
	}
}

void			ft_init_strct(t_info *strct)
{
	strct->flags = NULL;
	strct->minfield = 0;
	strct->star_minfield = 0;
	strct->true_precision = 0;
	strct->precision = 0;
	strct->star_precision = 0;
	strct->lenght = NULL;
	strct->letter = '?';
	strct->stars = 0;
	strct->ret = 0;
	strct->sign = '+';
	ft_init_lst(strct);
}
