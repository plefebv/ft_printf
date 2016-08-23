/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 04:02:50 by plefebvr          #+#    #+#             */
/*   Updated: 2016/08/23 16:50:51 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include "src/libft/includes/libft.h"
#include <stdio.h>
#include <wchar.h>

int		main(void)
{
	int ret;
		
	ft_putstr("=== PRINTF PLFEBVR MAIN TEST ===\n\n");

	ft_putstr("TEST : %DDDDD %IIIII\n");
	
	ft_putstr("[0000] FT : ");
	ft_printf("%d", -3);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -3);

	ft_putstr("[0001] FT : ");
	ft_printf("%hhd", 23);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 23);

	ft_putstr("[0002] FT : ");
	ft_printf("%hd", 23);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 23);

	ft_putstr("[0003] FT : ");
	ft_printf("%ld", 23);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 23);

	ft_putstr("[0004] FT : ");
	ft_printf("%lld", 23);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 23);

	ft_putstr("[0005] FT : ");
	ft_printf("%jd", 23);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 23);

	ft_putstr("[0006] FT : ");
	ft_printf("%zd", 23);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 23);

	ft_putstr("[0007] FT : ");
	ft_printf("%d", -23);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -23);

	ft_putstr("[0008] FT : ");
	ft_printf("%hhd", -23);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -23);

	ft_putstr("[0009] FT : ");
	ft_printf("%hd", -23);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -23);

	ft_putstr("[0010] FT : ");
	ft_printf("%ld", -23);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -23);

	ft_putstr("[0011] FT : ");
	ft_printf("%lld", -23);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -23);

	ft_putstr("[0012] FT : ");
	ft_printf("%jd", -23);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -23);

	ft_putstr("[0013] FT : ");
	ft_printf("%zd", -23);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -23);

	ft_putstr("[0014] FT : ");
	ft_printf("%d", 129);
	ft_putstr(" | OFCL : ");
	printf("%d\n", 129);

	ft_putstr("[0015] FT : ");
	ft_printf("%hhd", 129);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 129);

	ft_putstr("[0016] FT : ");
	ft_printf("%hd", 129);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 129);

	ft_putstr("[0017] FT : ");
	ft_printf("%ld", 129);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 129);

	ft_putstr("[0018] FT : ");
	ft_printf("%lld", 129);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 129);

	ft_putstr("[0019] FT : ");
	ft_printf("%jd", 129);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 129);

	ft_putstr("[0020] FT : ");
	ft_printf("%zd", 129);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 129);

	ft_putstr("[0021] FT : ");
	ft_printf("%d", -129);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -129);

	ft_putstr("[0022] FT : ");
	ft_printf("%hhd", -129);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -129);

	ft_putstr("[0023] FT : ");
	ft_printf("%hd", -129);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -129);

	ft_putstr("[0024] FT : ");
	ft_printf("%ld", -129);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -129);

	ft_putstr("[0025] FT : ");
	ft_printf("%lld", -129);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -129);

	ft_putstr("[0026] FT : ");
	ft_printf("%jd", -129);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -129);

	ft_putstr("[0027] FT : ");
	ft_printf("%zd", -129);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -129);

	ft_putstr("[0028] FT : ");
	ft_printf("%d", 256);
	ft_putstr(" | OFCL : ");
	printf("%d\n", 256);

	ft_putstr("[0029] FT : ");
	ft_printf("%hhd", 256);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 256);

	ft_putstr("[0030] FT : ");
	ft_printf("%hd", 256);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 256);

	ft_putstr("[0031] FT : ");
	ft_printf("%ld", 256);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 256);

	ft_putstr("[0032] FT : ");
	ft_printf("%lld", 256);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 256);

	ft_putstr("[0033] FT : ");
	ft_printf("%jd", 256);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 256);

	ft_putstr("[0034] FT : ");
	ft_printf("%zd", 256);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 256);

	ft_putstr("[0035] FT : ");
	ft_printf("%d", -256);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -256);

	ft_putstr("[0036] FT : ");
	ft_printf("%hhd", -256);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -256);

	ft_putstr("[0037] FT : ");
	ft_printf("%hd", -256);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -256);

	ft_putstr("[0038] FT : ");
	ft_printf("%ld", -256);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -256);

	ft_putstr("[0039] FT : ");
	ft_printf("%lld", -256);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -256);

	ft_putstr("[0040] FT : ");
	ft_printf("%jd", -256);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -256);

	ft_putstr("[0041] FT : ");
	ft_printf("%zd", -256);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -256);

	ft_putstr("[0042] FT : ");
	ft_printf("%d", 65530);
	ft_putstr(" | OFCL : ");
	printf("%d\n", 65530);

	ft_putstr("[0043] FT : ");
	ft_printf("%hhd", 65530);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 65530);

	ft_putstr("[0044] FT : ");
	ft_printf("%hd", 65530);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 65530);

	ft_putstr("[0045] FT : ");
	ft_printf("%ld", 65530);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 65530);

	ft_putstr("[0046] FT : ");
	ft_printf("%lld", 65530);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 65530);

	ft_putstr("[0047] FT : ");
	ft_printf("%jd", 65530);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 65530);

	ft_putstr("[0048] FT : ");
	ft_printf("%zd", 65530);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 65530);

	ft_putstr("[0049] FT : ");
	ft_printf("%d", -65530);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -65530);

	ft_putstr("[0050] FT : ");
	ft_printf("%hhd", -65530);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -65530);

	ft_putstr("[0051] FT : ");
	ft_printf("%hd", -65530);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -65530);

	ft_putstr("[0052] FT : ");
	ft_printf("%ld", -65530);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -65530);

	ft_putstr("[0053] FT : ");
	ft_printf("%lld", -65530);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -65530);

	ft_putstr("[0054] FT : ");
	ft_printf("%jd", -65530);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -65530);

	ft_putstr("[0055] FT : ");
	ft_printf("%zd", -65530);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -65530);

	ft_putstr("[0056] FT : ");
	ft_printf("%d", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%d\n", 2147483600);

	ft_putstr("[0057] FT : ");
	ft_printf("%hhd", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 2147483600);

	ft_putstr("[0058] FT : ");
	ft_printf("%hd", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 2147483600);

	ft_putstr("[0059] FT : ");
	ft_printf("%ld", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 2147483600);

	ft_putstr("[0060] FT : ");
	ft_printf("%lld", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 2147483600);

	ft_putstr("[0061] FT : ");
	ft_printf("%jd", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 2147483600);

	ft_putstr("[0062] FT : ");
	ft_printf("%zd", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 2147483600);

	ft_putstr("[0063] FT : ");
	ft_printf("%d", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -2147483600);

	ft_putstr("[0064] FT : ");
	ft_printf("%hhd", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -2147483600);

	ft_putstr("[0065] FT : ");
	ft_printf("%hd", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -2147483600);

	ft_putstr("[0066] FT : ");
	ft_printf("%ld", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -2147483600);

	ft_putstr("[0067] FT : ");
	ft_printf("%lld", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -2147483600);

	ft_putstr("[0069] FT : ");
	ft_printf("%jd", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -2147483600);

	ft_putstr("[0070] FT : ");
	ft_printf("%zd", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -2147483600);

	ft_putstr("[0071] FT : ");
	ft_printf("%d", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%d\n", 2147489999);

	ft_putstr("[0072] FT : ");
	ft_printf("%hhd", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 2147489999);

	ft_putstr("[0073] FT : ");
	ft_printf("%hd", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 2147489999);

	ft_putstr("[0074] FT : ");
	ft_printf("%ld", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 2147489999);

	ft_putstr("[0075] FT : ");
	ft_printf("%lld", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 2147489999);

	ft_putstr("[0076] FT : ");
	ft_printf("%jd", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 2147489999);

	ft_putstr("[0077] FT : ");
	ft_printf("%zd", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 2147489999);

	ft_putstr("[0078] FT : ");
	ft_printf("%d", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -2147489999);

	ft_putstr("[0079] FT : ");
	ft_printf("%hhd", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -2147489999);

	ft_putstr("[0080] FT : ");
	ft_printf("%hd", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -2147489999);

	ft_putstr("[0081] FT : ");
	ft_printf("%ld", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -2147489999);

	ft_putstr("[0082] FT : ");
	ft_printf("%lld", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -2147489999);

	ft_putstr("[0083] FT : ");
	ft_printf("%jd", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -2147489999);

	ft_putstr("[0084] FT : ");
	ft_printf("%zd", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -2147489999);

	ft_putstr("[0085] FT : ");
	ft_printf("%d", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%d\n", 4294967295);

	ft_putstr("[0086] FT : ");
	ft_printf("%hhd", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 4294967295);

	ft_putstr("[0087] FT : ");
	ft_printf("%hd", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 4294967295);

	ft_putstr("[0088] FT : ");
	ft_printf("%ld", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 4294967295);

	ft_putstr("[0089] FT : ");
	ft_printf("%lld", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 4294967295);

	ft_putstr("[0090] FT : ");
	ft_printf("%jd", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 4294967295);

	ft_putstr("[0091] FT : ");
	ft_printf("%zd", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 4294967295);

	ft_putstr("[0092] FT : ");
	ft_printf("%d", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -4294967295);

	ft_putstr("[0093] FT : ");
	ft_printf("%hhd", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -4294967295);

	ft_putstr("[0094] FT : ");
	ft_printf("%hd", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -4294967295);

	ft_putstr("[0095] FT : ");
	ft_printf("%ld", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -4294967295);

	ft_putstr("[0096] FT : ");
	ft_printf("%lld", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -4294967295);

	ft_putstr("[0097] FT : ");
	ft_printf("%jd", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -4294967295);

	ft_putstr("[0098] FT : ");
	ft_printf("%zd", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -4294967295);

	ft_putstr("[0099] FT : ");
	ft_printf("%d", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%d\n", 4294969999);

	ft_putstr("[0100] FT : ");
	ft_printf("%hhd", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", 4294969999);

	ft_putstr("[0101] FT : ");
	ft_printf("%hd", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", 4294969999);

	ft_putstr("[0102] FT : ");
	ft_printf("%ld", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", 4294969999);

	ft_putstr("[0103] FT : ");
	ft_printf("%lld", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", 4294969999);

	ft_putstr("[0104] FT : ");
	ft_printf("%jd", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", 4294969999);

	ft_putstr("[0105] FT : ");
	ft_printf("%zd", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", 4294969999);

	ft_putstr("[0106] FT : ");
	ft_printf("%d", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%d\n", -4294969999);

	ft_putstr("[0107] FT : ");
	ft_printf("%hhd", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hhd\n", -4294969999);

	ft_putstr("[0108] FT : ");
	ft_printf("%hd", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hd\n", -4294969999);

	ft_putstr("[0109] FT : ");
	ft_printf("%ld", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%ld\n", -4294969999);

	ft_putstr("[0110] FT : ");
	ft_printf("%lld", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%lld\n", -4294969999);

	ft_putstr("[0111] FT : ");
	ft_printf("%jd", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%jd\n", -4294969999);

	ft_putstr("[0112] FT : ");
	ft_printf("%zd", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%zd\n", -4294969999);

	ft_putstr("[0113] FT : ");
	ft_printf("%llD", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%llD\n", -4294969999);

	printf("%0+12.12d\n", 88);
	ft_printf("%0+14.12d\n", 88);

	ft_printf("%d  coucou %+d petite % d\n", 12, -34, -56);

	return (0);
}
