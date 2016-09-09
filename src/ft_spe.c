/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 18:51:03 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/09 23:15:06 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_strsub_spe(t_info *info, int add, int i)
{
	char	*ret;

	i = 0;
	info->ret = ft_strlen(info->lst->data);
	ret = (char *)malloc(sizeof(char) * (info->ret + 1));
	if (ret)
	{
		while (i < info->ret)
		{
			ret[i] = info->lst->data[i];
			i++;
		}
		ret[i] = '\0';
		return (ret);
	}
	else
		return (NULL);
}

char		*ft_strjoin_spe(char *str, t_info *info, int add, int tmp)
{
	char	*ret;
	int		i;
	int		j;
	int		tmp_len_str;

	i = 0;
	j = 0;
/*	ft_putstr("STR JOIN IN  = ");
	write(1, str, info->ret);
	ft_putendl("\n");
	ft_putstr("TO JOIN = |");
	ft_putstr(info->lst->data);
	ft_putendl("|");*/
	tmp_len_str = info->ret;
	/*ft_putendl("");
	ft_putstr("i : ");
	ft_nbrendl(i);
	ft_putendl("");
	ft_putstr("tmp_len_str : ");
	ft_nbrendl(tmp_len_str);
	ft_putendl("");*/
	tmp = ft_strlen(info->lst->data);
	info->ret = info->ret + tmp + add;
	ret = (char *)malloc(sizeof(char) * (info->ret + 1));
	if (ret)
	{
		while (i < tmp_len_str)
		{
			ret[i] = str[i];
			i++;
		}
		//ft_putendl(ret);
		while (i < info->ret)
			ret[i++] = info->lst->data[j++];
		ret[i] = '\0';
		//ft_putstr("STR JOIN OUT = ");
		//write(1, ret, info->ret);
		//ft_putendl("");
		ft_memdel((void **)&str);
		return (ret);
	}
	else
		return (NULL);
}
