/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 18:22:22 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/10 01:03:26 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int		main()
{
	//char c = '\0';
	//ft_nbrendl(ft_printf(""));
	//ft_printf("%-+10.5d\n", 4242);
	//ft_printf("%0+5d\n", 42);
	//ft_printf("%+d", 0);
	//ft_printf("%lld", -9223372036854775808);
	//printf("@moulitest: %5.d", -42);
	//printf("%.d, %.0d\n", 0, 0);
	//printf("@moulitest: %5.d %5.0d\n", 0, 0);
	//ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	//ft_printf("%%\n");
	//printf( "|%-5+d|", 42);
	//ft_putendl("");//ft_printf("%jhd", "9223372036854775807");
	//ft_printf( "|%-5+d|", 42);
	//ft_printf("%hhs", "tu veux ma bite\n");
	//ft_printf("%5%");
	//ft_printf("@moulitest: %s", NULL);
	//ft_printf("%c   ", 0);
	
	//ft_nbrendl(ft_printf("me :{%4c}\n", 0));	
	//ft_putendl("");
	//ft_nbrendl(printf("of :{%4c}\n", 0));
	//ft_putendl(" ========== TEST 1 ========= \n\n\n");
	//ft_nbrendl(ft_printf("%c", 0));
	//ft_putendl("");
	//ft_nbrendl(ft_printf("%c%c%c %2c", 0,0,0,0));
	//ft_nbrendl(printf("%c%c%c %2c", 0,0,0,0));
	//ft_putendl(" =========================== \n\n\n");
	//write(1, &c , 1);
	
//	ft_putnbr(ft_printf("caca %3c %c", 0, 0));
//	ft_putendl("");
//	ft_putnbr(printf(" %1c %2c %3c", 0, 0, 0));
	//char *s = "je \0";
	//int i = 0;
	//while (i < 4)
	//	write(1, s + i++, 1);
	
	wchar_t *s = L"\u00A3";
	
	ft_printf("%ls\n", s);

}

