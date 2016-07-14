/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:26:56 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/14 03:04:00 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static long long		ft_nlen(long long n)
{
	long long 			i;
	long long nb;

	i = 0;
	nb = n;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static int		n_len_int(int n)
{
	int		i;
	int		ret;

	i = 0;
	ret = n;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (ret)
	{
		ret = ret / 10;
		i++;
	}
	return (i);
}

/*char			*ft_itoa_ll(long long n, t_info *info)
{
	char				*str;
	long long			i;
	unsigned long long	j;

	printf("Valeur de n = %lld\n\n", n);
	if (n < 0)
		info->sign = '-';
	j = (n >= 0 ? n : -n);
	i = (n >= 0 ? ft_nlen(n) : ft_nlen(-n));
	if (j > 9223372036854775807)
		return (ft_strdup("9223372036854775808"));
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
}*/

char 			*ft_itoa_ll(long long n, t_info *info)
{
	char			*str;
	long long		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nlen(n) - 1;
	if ((str = (char *)malloc(sizeof(char) * (i + 1))))
	{
		str[i + 1] = '\0';
		if (n < 0)
		{
			info->sign = '-';
			str[0] = '-';
			n = -n;
		}
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

char 			*ft_itoa_ull(unsigned long long n, t_info *info)
{
	char			*str;
	unsigned long long		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nlen(n) - 1;
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
