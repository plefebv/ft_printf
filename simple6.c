/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple6.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <plefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 18:39:38 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/29 13:21:41 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>

int	main(void)
{
/*	wint_t c[] = L"É";
	wprintf("%c\n", c);
	wprintf("%lc\n", c);*/\
	char *s = "\u00A3\n";
	wchar_t *c = L"£££££\n";
//for (int i = 0x0000; i <= 0xffff; i++) {

    //then somehow increment the string
//	printf("%ci\n", c);
	//char c = '\0';
	printf("%s\n", s);
	printf("%ls\n", c);
	//t_printf("¡\n");
	//printf("%c\n", c);
//    str = "\u25A2\n";
//    printf("%s", str);

//    str = "\u25A3\n";
//    printf("%s", str);
//}
}
