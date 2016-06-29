/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 04:02:50 by plefebvr          #+#    #+#             */
/*   Updated: 2016/06/29 08:26:03 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "src/libft/includes/libft.h"
#include <stdio.h>

int		main(void)
{
	int ret;

	ret = ft_printf("12345%-+ *.*hhd %%caca", 666, 999);
	ft_putchar('\n');
	ft_nbrendl(ret);
	return (0);
}
