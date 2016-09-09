/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 14:02:56 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/10 01:10:31 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void			ft_char_minfield(t_info *info, int left)
{
	char	*s;


	s = (char *)malloc(sizeof(char) * info->minfield);
	if (s)
	{
		s[info->minfield - 1] = '\0';
		if (!left)
		{
			if (info->flags && ft_strchr(info->flags, '0'))
				ft_add_char(&s, info->minfield - 1, '0');
			else
				ft_add_char(&s, info->minfield - 1, ' ');
			info->lst->data = ft_strjoin(s, info->lst->data);
		}
		else
		{
			ft_add_char(&s, info->minfield - 1, ' ');
			info->lst->data = ft_strjoin(info->lst->data, s);
		}
		ft_memdel((void **)&s);
	}
}

void		ft_treat_data(t_info *info)
{
	if (info->minfield > 0 && (info->letter == 'c' || info->letter == '%'))
		ft_char_minfield(info, (info->flags && ft_strchr(info->flags, '-')) ? 1 : 0);	
}

char		*ft_space_string(int size, t_info *info)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str)
	{
		str[size] = '\0';
		while (i < size)
			str[i++] = ' ';
		info->lst->ret += 1;
		//ft_putchar('|');
		//write(1, str, i +  1);
		//ft_putendl("|");
	}
	return (str);
}

void		ft_sc(void *ap, t_info *info)
{
	if (info->letter == 'c')
	{
		if (info->length && ft_strcmp("l", info->length) == 0)
		{
			if ((wchar_t)ap != 0)
				ft_put_wc((wchar_t)ap, info);
			if ((wchar_t)ap == 0 && !info->minfield)
			{
			//	ft_put_in_lst(info, "");
				info->lst->ret += 1;
			//	info->ret_c += 1;
			}
		}
		else
		{
			if ((char)ap != 0)
				ft_put_char((char)ap, info);	
			if ((char)ap == 0 && !info->minfield)
			{
				//ft_put_in_lst(info, "");
				//ft_putendl("COUCOU");
				info->lst->ret += 1;
				//info->ret_c += 1;
			}
		}
	}
	if (info->letter == 's')
	{
		if (info->length && ft_strcmp("l", info->length) == 0)
			if ((wchar_t *)ap != NULL)
				ft_put_ws((wchar_t *)ap, info);
			else
				ft_put_in_lst(info, "(null)");
		else
			if ((char *)ap != NULL)
				ft_put_in_lst(info, (char *)ap);
			else
				ft_put_in_lst(info, "(null)");
	}
	if (!(info->letter == 'c' && (char)ap == 0))
		ft_treat_data(info);
	else if (info->letter == 'c' && (char)ap == 0 && info->minfield > 0)
		ft_put_in_lst(info, ft_space_string(info->minfield - 1, info));
}
