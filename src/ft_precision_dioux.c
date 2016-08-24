/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_dioux.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 16:40:25 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/24 17:25:20 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/*int			ft_size_nbr(char *s)
{
	int		i;

	i = 0;
	while (ft_isdigit(s[i]))
			i++;
	return (i);
}*/

void		ft_add_char(char **s, int add, char c)
{
	int		i;

	i = 0;
	while (i < add)
		s[0][i++] = c;
}

void		ft_add_precision_dioux(t_info *info, int add)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (add + 1));
	if (s)
	{
		s[add] = '\0';
		ft_add_char(&s, add, '0');
		info->lst->data = ft_strjoin(s, info->lst->data);
		ft_memdel((void **)&s);
	}
}

void		ft_precision_dioux(t_info *info)
{
	int		size;

	size = ft_strlen(info->lst->data);
	if (size < info->precision)
		ft_add_precision_dioux(info, info->precision - size);
}
