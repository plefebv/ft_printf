/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 04:02:50 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/06 01:35:01 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "src/libft/includes/libft.h"
#include <stdio.h>

int		main(void)
{
	int ret;

	//ret = ft_printf("12345%-+ 666.*hhd %*.999dcaca", 999, 666, 999);
	//ret = printf("%*d\n%*d\n", 20, 999, 20, 999);
	//ret = ft_printf("%20.*hhd %20.*ld %*.20lld %20.20hd", 20, 20, 20);
	//ret = printf("%20.*d %20.*d %*.20d %20.20d", 20, 20, 20, 20, 20, 20, 20);
	ft_printf("Coucou %hhd Thomasse\n\n\n\n", 300000);
	printf("%hhd\n", 300000);
	ft_putchar('\n');
	//ft_nbrendl(ret);
	return (0);
}
