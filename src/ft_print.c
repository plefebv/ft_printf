/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 20:43:58 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/07 21:41:08 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print(t_info *info)
{
	char	*print;
	int		i;

	i = 0;
	print = (char *)malloc(sizeof(char) * (info->ret + 1));
	while (info->lst->next != NULL)
	{
		while (info->lst->ret >= 0)
		{
			
		}

	}

}
