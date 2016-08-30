/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <plefebvr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 21:35:42 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/26 22:18:25 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main(void)
{
/*	long i = -2147483648;
	unsigned long long k = 0;

	k = i;
	printf("%x\n%lld\n%d", i, k, i);*/
char str[] = "αγρω";
printf("%d %d %s\n", sizeof(str), strlen(str), str);
	return (0);
}
