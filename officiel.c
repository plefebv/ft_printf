/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   officiel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 10:09:28 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/05 01:11:52 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			main(void)
{
	int n;

	n = printf(argv[1]);
	argv[1]printf("Coucou %d\n", n);
	return (0);
}
