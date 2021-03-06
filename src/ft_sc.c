/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 14:02:56 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/28 19:16:26 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void				pf_char_minfield(t_info *info, int left)
{
	char	*s;

	if ((s = (char *)ft_memalloc(sizeof(char) * info->minfield)))
	{
		s[info->minfield - 1] = '\0';
		if (!left)
		{
			if (info->flags && ft_strchr(info->flags, '0'))
				ft_add_char(&s, info->minfield - 1, '0');
			else
				ft_add_char(&s, info->minfield - 1, ' ');
			info->lst->data = ft_strjoin_f(s, info->lst->data);
		}
		else
		{
			ft_add_char(&s, info->minfield - 1, ' ');
			info->lst->data = ft_strjoin_f(info->lst->data, s);
		}
	}
}

static char			*ft_space_string(int size, t_info *info)
{
	char	*str;
	int		i;
	char	add;

	i = 0;
	add = (info->flags && ft_strchr(info->flags, '0')) ? '0' : ' ';
	if ((str = (char *)malloc(sizeof(char) * (size + 1))))
	{
		if (info->flags && ft_strchr(info->flags, '-'))
		{
			str[i++] = '\0';
			while (i < size + 1)
				str[i++] = add;
			info->lst->mfw_n = size;
			info->lst->ret = 1;
		}
		else
		{
			str[size] = '\0';
			while (i < size)
				str[i++] = add;
			info->lst->ret = 1;
		}
	}
	return (str);
}

static void			pf_treat_c(void *ap, t_info *info)
{
	if (info->letter == 'c')
	{
		ft_put_in_lst(info, ft_strdup(""));
		if (info->length && ft_strcmp("l", info->length) == 0)
		{
			if ((wchar_t)ap != 0)
				ft_put_wc((wchar_t)ap, info);
			if ((wchar_t)ap == 0 && !info->minfield)
			{
				info->lst->ret += 1;
			}
		}
		else
		{
			if ((char)ap != 0)
				ft_put_char((char)ap, info);
			if ((char)ap == 0 && !info->minfield)
				info->lst->ret += 1;
		}
	}
}

static void			pf_treat_s(void *ap, t_info *info)
{
	if (info->letter == 's')
	{
		if (info->length && ft_strcmp("l", info->length) == 0)
		{
			if ((wchar_t *)ap != NULL)
				ft_put_ws(ap, info);
			else
				ft_put_in_lst(info, ft_strdup("(null)"));
		}
		else
		{
			if ((char *)ap != NULL)
				ft_put_in_lst(info, ft_strdup((char *)ap));
			else
				ft_put_in_lst(info, ft_strdup("(null)"));
		}
		ft_precision_s(info);
		ft_minfield(info);
	}
}

void				ft_sc(void *ap, t_info *info)
{
	pf_treat_c(ap, info);
	pf_treat_s(ap, info);
	if (!(info->letter == 'c' && (char)ap == 0))
		ft_treat_data(info);
	else if (info->letter == 'c' && (char)ap == 0 && info->minfield > 0)
	{
		ft_put_in_lst(info, ft_strdup(""));
		free(info->lst->data);
		info->lst->data = ft_space_string(info->minfield - 1, info);
	}
}
