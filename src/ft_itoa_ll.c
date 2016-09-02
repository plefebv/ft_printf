/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:26:56 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/02 13:13:30 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static long long		ft_nlen(long long n)
{
	long long 			i;

	i = 0;
	if (n == 0)
		return (1);
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static long long		ft_nlen_u(unsigned long long n)
{
	long long			i;

	i = 0;
	if (n == 0)
		return (1);
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char 			*ft_itoa_ll(long long n, t_info *info)
{
	char			*str;
	long long		i;
	unsigned long long	j;
	
	i = n >= 0 ? ft_nlen(n) : ft_nlen(-n);
	if (n < 0)
		info->sign = '-';
	j = n >= 0 ? n : -n;
	if (n > 9223372036854775807)
		return (ft_strdup("9223372036854775807"));
	if ((str = (char *)malloc(sizeof(char) * (i + 1))))
	{
		str[i + 1] = '\0';
		if (j == 0)
			str[0] = '0';
		while (j > 0)
		{
			str[i--] = (j % 10) + 48;
			j = j / 10;
		}
		return (str);
	}
	else
		return (NULL);
}

char 			*ft_itoa_ull(unsigned long long n)
{
	char			*str;
	long long		i;

	i = ft_nlen_u(n);
	if ((str = (char *)malloc(sizeof(char) * (i + 1))))
	{
		str[i + 1] = '\0';
		if (n == 0)
			str[0] = '0';
		while (n > 0)
		{
			str[i--] = (n % 10) + 48;
			n = n / 10;
		}
		return (str);
	}
	else
		return (NULL);
}
