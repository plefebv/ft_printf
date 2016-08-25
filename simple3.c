/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 11:49:42 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/25 13:36:58 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			main(void)
{
	ft_printf("%15u\n", 22);
	printf("%15u\n", 22);
	ft_putendl("");

	ft_printf("%015u\n", 22);
	printf("%015u\n", 22);
	ft_putendl("");

	ft_printf("% 15u\n", 22);
	printf("% 15u\n", 22);
	ft_putendl("");

	ft_printf("%+15u\n", 22);
	printf("%+15u\n", 22);
	ft_putendl("");

	ft_printf("%+015u\n", 22);
	printf("%+015u\n", 22);
	ft_putendl("");

	ft_printf("%15u\n", -22);
	printf("%15u\n", -22);
	ft_putendl("");

	ft_printf("%+15u\n", -22);
	printf("%+15u\n", -22);

	ft_putendl("");
	ft_printf("%+015u\n", -22);
	printf("%+015u\n", -22);	
	ft_putendl("");
	
	ft_printf("% 15u\n", -22);
	printf("% 15u\n", -22);
	ft_putendl("");

	ft_printf("% +015u\n", -22);
	printf("% +015u\n", -22);
	ft_putendl("");
	return (0);
}
