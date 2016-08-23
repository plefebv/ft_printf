

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 04:02:50 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/14 03:30:32 by plefebvr         ###   ########.fr       */
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

	ft_putstr("TEST : %UUUUUUUU\n");
	
	ft_putstr("[0000] FT : ");
	ft_printf("%u", 23);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 23);

	ft_putstr("[0001] FT : ");
	ft_printf("%hhu", 23);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 23);

	ft_putstr("[0002] FT : ");
	ft_printf("%hu", 23);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 23);

	ft_putstr("[0003] FT : ");
	ft_printf("%lu", 23);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 23);

	ft_putstr("[0004] FT : ");
	ft_printf("%llu", 23);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 23);

	ft_putstr("[0005] FT : ");
	ft_printf("%ju", 23);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 23);

	ft_putstr("[0006] FT : ");
	ft_printf("%zu", 23);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 23);

	ft_putstr("[0007] FT : ");
	ft_printf("%u", -23);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -23);

	ft_putstr("[0008] FT : ");
	ft_printf("%hhu", -23);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -23);

	ft_putstr("[0009] FT : ");
	ft_printf("%hu", -23);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -23);

	ft_putstr("[0010] FT : ");
	ft_printf("%lu", -23);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -23);

	ft_putstr("[0011] FT : ");
	ft_printf("%llu", -23);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -23);

	ft_putstr("[0012] FT : ");
	ft_printf("%ju", -23);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -23);

	ft_putstr("[0013] FT : ");
	ft_printf("%zu", -23);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -23);

	ft_putstr("[0014] FT : ");
	ft_printf("%u", 129);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 129);

	ft_putstr("[0015] FT : ");
	ft_printf("%hhu", 129);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 129);

	ft_putstr("[0016] FT : ");
	ft_printf("%hu", 129);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 129);

	ft_putstr("[0017] FT : ");
	ft_printf("%lu", 129);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 129);

	ft_putstr("[0018] FT : ");
	ft_printf("%llu", 129);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 129);

	ft_putstr("[0019] FT : ");
	ft_printf("%ju", 129);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 129);

	ft_putstr("[0020] FT : ");
	ft_printf("%zu", 129);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 129);

	ft_putstr("[0021] FT : ");
	ft_printf("%u", -129);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -129);

	ft_putstr("[0022] FT : ");
	ft_printf("%hhu", -129);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -129);

	ft_putstr("[0023] FT : ");
	ft_printf("%hu", -129);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -129);

	ft_putstr("[0024] FT : ");
	ft_printf("%lu", -129);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -129);

	ft_putstr("[0025] FT : ");
	ft_printf("%llu", -129);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -129);

	ft_putstr("[0026] FT : ");
	ft_printf("%ju", -129);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -129);

	ft_putstr("[0027] FT : ");
	ft_printf("%zu", -129);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -129);

	ft_putstr("[0028] FT : ");
	ft_printf("%u", 256);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 256);

	ft_putstr("[0029] FT : ");
	ft_printf("%hhu", 256);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 256);

	ft_putstr("[0030] FT : ");
	ft_printf("%hu", 256);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 256);

	ft_putstr("[0031] FT : ");
	ft_printf("%lu", 256);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 256);

	ft_putstr("[0032] FT : ");
	ft_printf("%llu", 256);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 256);

	ft_putstr("[0033] FT : ");
	ft_printf("%ju", 256);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 256);

	ft_putstr("[0034] FT : ");
	ft_printf("%zu", 256);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 256);

	ft_putstr("[0035] FT : ");
	ft_printf("%u", -256);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -256);

	ft_putstr("[0036] FT : ");
	ft_printf("%hhu", -256);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -256);

	ft_putstr("[0037] FT : ");
	ft_printf("%hu", -256);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -256);

	ft_putstr("[0038] FT : ");
	ft_printf("%lu", -256);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -256);

	ft_putstr("[0039] FT : ");
	ft_printf("%llu", -256);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -256);

	ft_putstr("[0040] FT : ");
	ft_printf("%ju", -256);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -256);

	ft_putstr("[0041] FT : ");
	ft_printf("%zu", -256);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -256);

	ft_putstr("[0042] FT : ");
	ft_printf("%u", 65530);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 65530);

	ft_putstr("[0043] FT : ");
	ft_printf("%hhu", 65530);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 65530);

	ft_putstr("[0044] FT : ");
	ft_printf("%hu", 65530);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 65530);

	ft_putstr("[0045] FT : ");
	ft_printf("%lu", 65530);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 65530);

	ft_putstr("[0046] FT : ");
	ft_printf("%llu", 65530);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 65530);

	ft_putstr("[0047] FT : ");
	ft_printf("%ju", 65530);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 65530);

	ft_putstr("[0048] FT : ");
	ft_printf("%zu", 65530);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 65530);

	ft_putstr("[0049] FT : ");
	ft_printf("%u", -65530);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -65530);

	ft_putstr("[0050] FT : ");
	ft_printf("%hhu", -65530);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -65530);

	ft_putstr("[0051] FT : ");
	ft_printf("%hu", -65530);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -65530);

	ft_putstr("[0052] FT : ");
	ft_printf("%lu", -65530);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -65530);

	ft_putstr("[0053] FT : ");
	ft_printf("%llu", -65530);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -65530);

	ft_putstr("[0054] FT : ");
	ft_printf("%ju", -65530);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -65530);

	ft_putstr("[0055] FT : ");
	ft_printf("%zu", -65530);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -65530);

	ft_putstr("[0056] FT : ");
	ft_printf("%u", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 2147483600);

	ft_putstr("[0057] FT : ");
	ft_printf("%hhu", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 2147483600);

	ft_putstr("[0058] FT : ");
	ft_printf("%hu", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 2147483600);

	ft_putstr("[0059] FT : ");
	ft_printf("%lu", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 2147483600);

	ft_putstr("[0060] FT : ");
	ft_printf("%llu", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 2147483600);

	ft_putstr("[0061] FT : ");
	ft_printf("%ju", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 2147483600);

	ft_putstr("[0062] FT : ");
	ft_printf("%zu", 2147483600);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 2147483600);

	ft_putstr("[0063] FT : ");
	ft_printf("%u", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -2147483600);

	ft_putstr("[0064] FT : ");
	ft_printf("%hhu", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -2147483600);

	ft_putstr("[0065] FT : ");
	ft_printf("%hu", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -2147483600);

	ft_putstr("[0066] FT : ");
	ft_printf("%lu", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -2147483600);

	ft_putstr("[0067] FT : ");
	ft_printf("%llu", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -2147483600);

	ft_putstr("[0069] FT : ");
	ft_printf("%ju", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -2147483600);

	ft_putstr("[0070] FT : ");
	ft_printf("%zu", -2147483600);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -2147483600);

	ft_putstr("[0071] FT : ");
	ft_printf("%u", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 2147489999);

	ft_putstr("[0072] FT : ");
	ft_printf("%hhu", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 2147489999);

	ft_putstr("[0073] FT : ");
	ft_printf("%hu", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 2147489999);

	ft_putstr("[0074] FT : ");
	ft_printf("%lu", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 2147489999);

	ft_putstr("[0075] FT : ");
	ft_printf("%llu", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 2147489999);

	ft_putstr("[0076] FT : ");
	ft_printf("%ju", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 2147489999);

	ft_putstr("[0077] FT : ");
	ft_printf("%zu", 2147489999);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 2147489999);

	ft_putstr("[0078] FT : ");
	ft_printf("%u", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -2147489999);

	ft_putstr("[0079] FT : ");
	ft_printf("%hhu", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -2147489999);

	ft_putstr("[0080] FT : ");
	ft_printf("%hu", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -2147489999);

	ft_putstr("[0081] FT : ");
	ft_printf("%lu", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -2147489999);

	ft_putstr("[0082] FT : ");
	ft_printf("%llu", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -2147489999);

	ft_putstr("[0083] FT : ");
	ft_printf("%ju", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -2147489999);

	ft_putstr("[0084] FT : ");
	ft_printf("%zu", -2147489999);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -2147489999);

	ft_putstr("[0085] FT : ");
	ft_printf("%u", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 4294967295);

	ft_putstr("[0086] FT : ");
	ft_printf("%hhu", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 4294967295);

	ft_putstr("[0087] FT : ");
	ft_printf("%hu", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 4294967295);

	ft_putstr("[0088] FT : ");
	ft_printf("%lu", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 4294967295);

	ft_putstr("[0089] FT : ");
	ft_printf("%llu", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 4294967295);

	ft_putstr("[0090] FT : ");
	ft_printf("%ju", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 4294967295);

	ft_putstr("[0091] FT : ");
	ft_printf("%zu", 4294967295);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 4294967295);

	ft_putstr("[0092] FT : ");
	ft_printf("%u", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -4294967295);

	ft_putstr("[0093] FT : ");
	ft_printf("%hhu", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -4294967295);

	ft_putstr("[0094] FT : ");
	ft_printf("%hu", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -4294967295);

	ft_putstr("[0095] FT : ");
	ft_printf("%lu", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -4294967295);

	ft_putstr("[0096] FT : ");
	ft_printf("%llu", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -4294967295);

	ft_putstr("[0097] FT : ");
	ft_printf("%ju", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -4294967295);

	ft_putstr("[0098] FT : ");
	ft_printf("%zu", -4294967295);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -4294967295);

	ft_putstr("[0099] FT : ");
	ft_printf("%u", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%u\n", 4294969999);

	ft_putstr("[0100] FT : ");
	ft_printf("%hhu", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", 4294969999);

	ft_putstr("[0101] FT : ");
	ft_printf("%hu", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", 4294969999);

	ft_putstr("[0102] FT : ");
	ft_printf("%lu", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", 4294969999);

	ft_putstr("[0103] FT : ");
	ft_printf("%llu", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", 4294969999);

	ft_putstr("[0104] FT : ");
	ft_printf("%ju", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", 4294969999);

	ft_putstr("[0105] FT : ");
	ft_printf("%zu", 4294969999);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", 4294969999);

	ft_putstr("[0106] FT : ");
	ft_printf("%u", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%u\n", -4294969999);

	ft_putstr("[0107] FT : ");
	ft_printf("%hhu", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hhu\n", -4294969999);

	ft_putstr("[0108] FT : ");
	ft_printf("%hu", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%hu\n", -4294969999);

	ft_putstr("[0109] FT : ");
	ft_printf("%lu", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%lu\n", -4294969999);

	ft_putstr("[0110] FT : ");
	ft_printf("%llu", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%llu\n", -4294969999);

	ft_putstr("[0111] FT : ");
	ft_printf("%ju", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%ju\n", -4294969999);

	ft_putstr("[0112] FT : ");
	ft_printf("%zu", -4294969999);
	ft_putstr(" | OFCL : ");
	printf("%zu\n", -4294969999);

	return (0);
}
