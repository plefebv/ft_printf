/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 04:02:50 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/14 03:30:32 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "src/libft/includes/libft.h"
#include <stdio.h>

int		main(void)
{
	int ret;
//	t_info	test;

//	ft_init_strct(&test);
	//ret = ft_printf("12345%-+ 666.*hhd %*.999dcaca", 999, 666, 999);
	//ret = printf("%*d\n%*d\n", 20, 999, 20, 999);
	//ret = ft_printf("%20.*hhd %20.*ld %*.20lld %20.20hd", 20, 20, 20);
	//ret = printf("%20.*d %20.*d %*.20d %20.20d", 20, 20, 20, 20, 20, 20, 20);
	//printf("%s", ft_itoa(-1234));
	//ft_printf("Coucou %-hhd Thomasse %hhd\n", 300000, 2345);
	//printf("%+8d\n", 23);
	//ft_printf("%hhu %hu %lu %llu %ju %zu\n", 2883333, 2883333, 2883333, 2883333, 2883333, -2883333);
	//printf("%hhu %hu %lu %llu %ju %zu\n", 2883333, 2883333, 2883333, 2883333, 2883333, -2883333);
	printf("%hhi\n", 4563);
	ft_printf("%hhi\n", 4563);
	//printf("%s\n", ft_itoa_test(-3000, &test));
	//printf("Sign = %c\n", test.sign);
	//printf("%s\n", ft_itoa(-3000));
	//ft_putchar('\n');
	//ft_nbrendl(ret);
	return (0);
}
