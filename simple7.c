/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple7.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 12:36:01 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/02 13:47:34 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int			main(void)
{
	char s[] = "𝄞je met du caca dans ta bouche";
	char c = 'C';
	wchar_t q = L'\u00A3';
	int miaou = 215;
/*
	ft_printf("1 : %c \n", c);
	printf("2 : %c\n", q);
	printf("3 : %d\n", q);
	ft_printf("%d\n", q);
	ft_printf("%lc\n", q);
*/
	ft_printf("|retour : %d|\n", ft_printf("{%ls}", L"\xF0\x9D\x84\x9E"));
	ft_putendl("");
	ft_putendl("");
	ft_putendl("");
	ft_putendl("");
	printf("|retour : %d|\n", printf("{%ls}", L"\xF0\x9D\x84\x9E"));
	ft_putendl("");
	ft_putendl("");
	ft_putendl("");
	ft_putendl("");
	ft_printf("%s %lc\n", s, miaou);
	printf("%s %lc\n", s, miaou);

}
