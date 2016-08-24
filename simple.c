/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 11:49:42 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/24 18:18:42 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int			main(void)
{
	ft_printf("%15d\n", 22);
	printf("%15d\n", 22);

	ft_printf("%015d\n", 22);
	printf("%015d\n", 22);

	ft_printf("% 15d\n", 22);
	printf("% 15d\n", 22);

	ft_printf("%+15d\n", 22);
	printf("%+15d\n", 22);

	ft_printf("%+015d\n", 22);
	printf("%+015d\n", 22);

	ft_printf("%15d\n", -22);
	printf("%15d\n", -22);

	ft_printf("%+15d\n", -22);
	printf("%+15d\n", -22);

	ft_printf("%+015d\n", -22);
	printf("%+015d\n", -22);	

	ft_printf("% 15d\n", -22);
	printf("% 15d\n", -22);
	return (0);
}
