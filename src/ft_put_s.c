/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:23:19 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/10 01:07:34 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void				ft_convert_ws_to_s(wchar_t ap, int i, t_info *info)
{
	if (ap < 128)
		info->lst->data[i] = ((ap >> 0) & 127) | 0;
	else if (ap < 2048)
	{
		info->lst->data[i] = ((ap >> 6) & 31) | 192;
		info->lst->data[i + 1] = ((ap >> 0) & 63) | 128;
	}
	else if (ap < 65536)
	{
		info->lst->data[i] = ((ap >> 12) & 15) | 224;
		info->lst->data[i + 1] = ((ap >> 6) & 63) | 128;
		info->lst->data[i + 2] = ((ap >> 0) & 63) | 128;
	}
	else if (ap < 1114112)
	{
		info->lst->data[i] = ((ap >> 18) & 7) | 240;
		info->lst->data[i + 1] = ((ap >> 12) & 63) | 128;
		info->lst->data[i + 2] = ((ap >> 6) & 63) | 128;
		info->lst->data[i + 3] = ((ap >> 0) & 63) | 128;
	}
}

unsigned int		ft_size_ws(wchar_t *ap)
{
	int		i;
	int		q;

	i = 0;
	q = 0;
	while (ap[i] != '\0')
	{
		if (ap[i] < 128)
			q++;
		else if (ap[i] < 2048)
			q += 2;
		else if (ap[i] < 65536)
			q += 3;
		else if (ap[i] < 1114112)
			q += 4;
		i++;
	}
	return (q);
}


int			ft_size_wc(wchar_t ap)
{
	int		ret;

	ret = 0;
	if (ap < 128)
		ret++;
	else if (ap < 2048)
		ret += 2;
	else if (ap < 65536)
		ret += 3;
	else if (ap < 1114112)
		ret += 4;
	return (ret);
}

void		ft_put_ws(wchar_t *ap, t_info *info)
{
	int		i;
	int		q;

	i = 0;
	q = 0;	
	ft_put_in_lst(info, "");
	//ft_nbrendl(ft_size_ws(ap));
	info->lst->data = ft_strnew(ft_size_ws(ap));
	while (ap[i] != '\0')
	{
		ft_convert_ws_to_s(ap[i], q, info);
		q += ft_size_wc(ap[i++]);
	}	
}
