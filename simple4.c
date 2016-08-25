/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 11:49:42 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/25 13:50:42 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			main(void)
{
	ft_printf("1\n");
	ft_printf("|%-15u|\n", 22);
	printf("|%-15u|\n", 22);
	ft_putendl("");

	ft_printf("2\n");
	ft_printf("|%-015u|\n", 22);
	printf("|%-015u|\n", 22);
	ft_putendl("");

	ft_printf("3\n");
	ft_printf("|%- 15u|\n", 22);
	printf("|%- 15u|\n", 22);
	ft_putendl("");

	ft_printf("4\n");
	ft_printf("|%-+15u|\n", 22);
	printf("|%-+15u|\n", 22);
	ft_putendl("");

	ft_printf("5\n");
	ft_printf("|%-+015u|\n", 22);
	printf("|%-+015u|\n", 22);
	ft_putendl("");

	ft_printf("6\n");
	ft_printf("|%-15u|\n", -22);
	printf("|%-15u|\n", -22);
	ft_putendl("");

	ft_printf("7\n");
	ft_printf("|%-+15u|\n", -22);
	printf("|%+-15u|\n", -22);

	ft_printf("8\n");
	ft_putendl("");
	ft_printf("|%-+015u|\n", -22);
	printf("|%-+015u|\n", -22);	
	ft_putendl("");
	
	ft_printf("9\n");
	ft_printf("|%- 15u|\n", -22);
	printf("|%- 15u|\n", -22);
	ft_putendl("");

	ft_printf("10\n");
	ft_printf("|%- +015u|\n", -22);
	printf("|%- +015u|\n", -22);
	ft_putendl("");
	return (0);
}
