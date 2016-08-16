#include "includes/ft_printf.h"
#include <wchar.h>
#include "printf.h"
#include <stdio.h>
#include <locale.h>

int     main (void)
{
//  setlocale(LC_ALL, "");
  wchar_t myChar1 = L'Ω';
//
//  printf("%d\n", printf("pr[%+9d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%+9d]\n", -1234));
//  printf("%d\n", printf("pr1[%+09d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft1[%+09d]\n", -1234));
//  printf("%d\n", printf("pr[%-+9.4d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%-+9.4d]\n", -1234));
//  printf("%d\n", printf("prU[%-+8.9d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ftU[%-+8.9d]\n", -1234));
//  printf("%d\n", printf("pr3[%-+8.12d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft3[%-+8.12d]\n", -1234));
//  printf("%d\n", printf("pr[%09d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%09d]\n", -1234));
//  printf("%d\n", printf("pr2[%010.8d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft2[%010.8d]\n", -1234));
//  printf("%d\n", printf("pr[%09.12d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%09.12d]\n", -1234));
//  printf("%d\n", printf("pr[%9d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%9d]\n", -1234));
//  printf("%d\n", printf("pr[%9d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%9d]\n", -1234));
//  printf("%d\n", printf("pr[% 9d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[% 9d]\n", -1234));
//  printf("%d\n", printf("pr[%- 9d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%- 9d]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft_123456789%10i12345\n", 6789));
//  printf("%d\n", printf("pr_123456789%10i12345\n", 6789));
//  ft_printf("%d\n", ft_printf("ft[%- *.*d]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%- *.*d]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft[%-*.*u]\n", 9, 14, 1234));
//  printf("%d\n", printf("pr[%-*.*u]\n", 9, 14, 1234));
//  ft_printf("%d\n", ft_printf("ft[%-*.*u]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%-*.*u]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft[%-*.*hhU]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%-*.*U]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft[%-*.*o]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%-*.*o]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft[%-*.*lx]\n", 9, 14, 12341234133));
//  printf("%d\n", printf("pr[%-*.*lx]\n", 9, 14, 12341234133));
//  ft_printf("%d\n", ft_printf("ft++>[%-*.*X]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr++>[%-*.*X]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%-*.*x]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft[%-*.*x]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%#-*.*x]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft[%#-*.*x]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%#-*.*X]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft[%#-*.*X]\n", 9, 14, -1234));
//  printf("%d\n", printf("prT[%#-*.*x]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ftT[%#-*.*x]\n", 9, 14, -1234));
//  printf("%d\n", printf("prT[%-*.*x]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ftT[%-*.*x]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr--->[%#-*.*O]\n", 9, 14, -1234));
//  ft_printf("%d\n", ft_printf("ft--->[%#-*.*O]\n", 9, 14, -1234));
//  printf("%d\n", printf("pr[%#o]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%#o]\n", -1234));
//  printf("%d\n", printf("pr[%o]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%o]\n", -1234));
//  printf("%d\n", printf("pr[%x]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%x]\n", -1234));
//  printf("%d\n", printf("pr[%#o]\n", -1234));
//  ft_printf("%d\n", ft_printf("ft[%#o]\n", -1234));
//  printf("%d\n", printf("pr[%C]\n", 95));
//  ft_printf("%d\n", ft_printf("ft[%C]\n", 95));
//  printf("%d\n", printf("pr_string1->[%s]\n", "Ceci est une phrase de test"));
//  ft_printf("%d\n", ft_printf("ft_string1->[%s]\n", "Ceci est une phrase de test"));
//  printf("%d\n", printf("pr_string2->[%-s]\n", "Ceci est une phrase de test"));
//  ft_printf("%d\n", ft_printf("ft_string2->[%-s]\n", "Ceci est une phrase de test"));
//  printf("%d\n", printf("pr_string3->[%-15.5s]\n", "Ceci est une phrase de test"));
//  ft_printf("%d\n", ft_printf("ft_string3->[%-15.5s]\n", "Ceci est une phrase de test"));
//  printf("%d\n", printf("pr_string->[%15.5s]\n", "Ceci est une phrase de test"));
//  ft_printf("%d\n", ft_printf("ft_string->[%15.5s]\n", "Ceci est une phrase de test"));
//  printf("%d\n", printf("pr_string->[%5.15s]\n", "Ceci est une phrase de test"));
//  ft_printf("%d\n", ft_printf("ft_string->[%5.15s]\n", "Ceci est une phrase de test"));
//  printf("%d\n", printf("pr_string->[%-5.15s]\n", "Ceci est une phrase de test"));
//  ft_printf("%d\n", ft_printf("ft_string->[%-5.15s]\n", "Ceci est une phrase de test"));
//  printf("%d\n", printf("pr_string->[%15.10s]\n", "Test"));
//  ft_printf("%d\n", ft_printf("ft_string->[%15.10s]\n", "Test"));
//  printf("%d\n", printf("pr[%p]\n", "TEST"));
//  ft_printf("%d\n", ft_printf("ft[%p]\n", "TEST"));
//  ft_printf("%d\n", ft_printf("ft_[%C]\n", myChar1));
//  printf("%d\n", printf("pr_[%C]\n", myChar1));
    
    ft_printf("[%2c]\n", 0);
    printf("[%2c]\n", 0);
    return (0);
}

void ft_print_di_flag_test()
{
    printf("ft_printf [% 10d]\n", 1234);
    ft_putstr("**************2*************\n");
    ft_printf("ft_printf [%+10d]\n", 1234);
    printf("ft_printf [%+10d]\n", 1234);
    ft_putstr("**************3*************\n");
    ft_printf("ft_printf [%010d]\n", 1234);
    printf("ft_printf [%010d]\n", 1234);
    ft_putstr("**************4*************\n");
    ft_printf("ft_printf [%010.5d]\n", 1234);
    printf("ft_printf [%010.5d]\n", 1234);
    ft_putstr("**************5*************\n");
    ft_printf("ft_printf [%010.5d]\n", 1234);
    printf("ft_printf [%010.5d]\n", 1234);
    ft_putstr("**************6*************\n");
    ft_printf("ft_printf [%-010.8d]\n", 1234);
    printf("ft_printf [%-010.8d]\n", 1234);
    ft_putstr("**************7*************\n");
    ft_printf("ft_printf [%-10.6d]\n", 1234);
    printf("ft_printf [%-10.6d]\n", 1234);
    ft_putstr("**************8*************\n");
    ft_printf("ft_printf [% 2.10d]\n", 1234);
    printf("ft_printf [% 2.10d]\n", 1234);
    ft_putstr("**************9*************\n");
    ft_printf("ft_printf [%+-010.5d]\n", 1234);
    printf("ft_printf [%+-010.5d]\n", 1234);
    ft_putstr("*************10*************\n");
    ft_printf("ft_printf [%0-10.21d]\n", 1234);
    printf("ft_printf [%0-10.21d]\n", 1234);
    ft_putstr("*************11*************\n");
    ft_printf("ft_printf [%090.90d]\n", 1234);
    printf("ft_printf [%090.90d]\n", 1234);
    ft_putstr("*************12*************\n");
    ft_printf("ft_printf [%0 -10.5d]\n", 1234);
    printf("ft_printf [%0 -10.5d]\n", 1234);
    ft_putstr("*************13*************\n");
    ft_printf("ft_printf [%-0000010.8d]\n", 1234);
    printf("ft_printf [%-0000010.8d]\n", 1234);
    ft_putstr("*************14*************\n");
    ft_printf("ft_printf [%00+-#10.6d]\n", 1234);
    printf("ft_printf [%00+-#10.6d]\n", 1234);
    ft_putstr("*************15*************\n");
    ft_printf("ft_printf [%00+-#10.6d]\n", 1234);
    ft_printf("ft_printf [%00+-#10.6d]\n", 1234);
    ft_putstr("*************16*************\n");
    ft_printf("ft_printf [%00+-#6d]\n", 1234);
    ft_printf("ft_printf [%00+-#6d]\n", 1234);
    ft_putstr("*************17*************\n");
    ft_printf("ft_printf [%010i]\n", 1234);
    ft_printf("ft_printf [%010i]\n", 1234);
    ft_putstr("*************18*************\n");
    ft_printf("ft_printf [%0-.6i]\n", 1234);
    ft_printf("ft_printf [%0-.6i]\n", 1234);
    ft_putstr("*************19*************\n");
    ft_printf("ft_printf [%-i]\n", 1234);
    ft_printf("ft_printf [%-i]\n", 1234);
    ft_putstr("*************21*************\n");
    ft_printf("ft_printf [%-10i]\n", 1234);
    ft_printf("ft_printf [%-10i]\n", 1234);

}

void    ft_test_d_num(void)
{
    ft_putstr("\n-------------------------------\n");
    ft_putendl("-17\n");

  	wchar_t myChar1 = L'Ω';
        signed char i = -17;
        short j = -17;
        long k = -17;
        long long l = -17;
        intmax_t m = -17;
        size_t n = -17;

        ft_printf("ft_printf %hhd \n", i);
        ft_printf("ft_printf %hd \n", j);
        ft_printf("ft_printf %ld \n", k);
        ft_printf("ft_printf %lld \n", l);
        ft_printf("ft_printf %jd \n", m);
        ft_printf("ft_printf %zd \n", n);
        
        printf("printf %hhd \n", i);
        printf("printf %hd \n", j);
        printf("printf %ld \n", k);
        printf("printf %lld \n", l);
        printf("printf %jd \n", m);
        printf("printf %zd \n", n);

    ft_putstr("\n-------------------------------\n");
    ft_putendl("2147483648\n");

        i = 2147483648;
        j = 2147483648;
        k = 2147483648;
        l = 2147483648;
        m = 2147483648;
        n = 2147483648;

        ft_printf("ft_printf %hhd \n", i);
        ft_printf("ft_printf %hd \n", j);
        ft_printf("ft_printf %ld \n", k);
        ft_printf("ft_printf %lld \n", l);
        ft_printf("ft_printf %jd \n", m);
        ft_printf("ft_printf %zd \n", n);
        
        printf("printf %hhd \n", i);
        printf("printf %hd \n", j);
        printf("printf %ld \n", k);
        printf("printf %lld \n", l);
        printf("printf %jd \n", m);
        printf("printf %zd \n", n);

    ft_putstr("\n-------------------------------\n");
    ft_putendl("-2147483648\n");

        i = -2147483648;
        j = -2147483648;
        k = -2147483648;
        l = -2147483648;
        m = -2147483648;
        n = -2147483648;

        ft_printf("ft_printf %hhd \n", i);
        ft_printf("ft_printf %hd \n", j);
        ft_printf("ft_printf %ld \n", k);
        ft_printf("ft_printf %lld \n", l);
        ft_printf("ft_printf %jd \n", m);
        ft_printf("ft_printf %zd \n", n);
        
        printf("printf %hhd \n", i);
        printf("printf %hd \n", j);
        printf("printf %ld \n", k);
        printf("printf %lld \n", l);
        printf("printf %jd \n", m);
        printf("printf %zd \n", n);

    ft_putstr("\n-------------------------------\n");
    ft_putendl("3147483649\n");

        i = 3147483649;
        j = 3147483649;
        k = 3147483649;
        l = 3147483649;
        m = 3147483649;
        n = 3147483649;

        ft_printf("ft_printf %hhd \n", i);
        ft_printf("ft_printf %hd \n", j);
        ft_printf("ft_printf %ld \n", k);
        ft_printf("ft_printf %lld \n", l);
        ft_printf("ft_printf %jd \n", m);
        ft_printf("ft_printf %zd \n", n);
        
        printf("printf %hhd \n", i);
        printf("printf %hd \n", j);
        printf("printf %ld \n", k);
        printf("printf %lld \n", l);
        printf("printf %jd \n", m);
        printf("printf %zd \n", n);

    ft_putstr("\n-------------------------------\n");
    ft_putendl("-3147483649\n");

        i = -3147483649;
        j = -3147483649;
        k = -3147483649;
        l = -3147483649;
        m = -3147483649;
        n = -3147483649;

        ft_printf("ft_printf %hhd \n", i);
        ft_printf("ft_printf %hd \n", j);
        ft_printf("ft_printf %ld \n", k);
        ft_printf("ft_printf %lld \n", l);
        ft_printf("ft_printf %jd \n", m);
        ft_printf("ft_printf %.4zd \n", n);
        
        printf("printf %hhd \n", i);
        printf("printf %hd \n", j);
        printf("printf %ld \n", k);
        printf("printf %lld \n", l);
        printf("printf %jd \n", m);
        printf("printf %.4zd \n", n);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_leloozer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbunel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 18:25:07 by kbunel            #+#    #+#             */
/*   Updated: 2016/03/09 18:25:44 by kbunel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void test_lelozzer(void)
{
    printf("\n\n/*****************************************************    TEST C S    *****************************************************/\n");
  wchar_t myChar1 = L'Ω';
    printf("pr_|%-8C| |%9lc| |%S|\n", myChar1, L'ℜ', L"ο Δικαιοπολις");
    ft_printf("ft_|%-8C| |%9lc| |%S|\n", myChar1, L'ℜ', L"ο Δικαιοπολις");
    ft_printf("ft%c\n", 'a');

char c = 'r';
    char *str = "dede";
    int     nbr = 4444444;
    setlocale(LC_ALL, "");

    printf("/*******************************************************   TEST D d i   ***************************************************/\n");
    printf("|%012d| |%%| |%D| |% i| |%-05d| |%+4d| |%+9.6d| |%#-09.0d| |%12d|\n", nbr, 5, -4, 8, 3, 32, 15, -21);
    ft_printf("|%012d| |%%| |%D| |% i| |%-05d| |%+4d| |%+9.6d| |%#-09.0d| |%12d|\n", nbr, 5, -4, 8, 3, 32, 15, -21);

    printf("\n|%+3ld| |%-#3.6hd| |%0.0jd| |%+06.12hhd| |%-07lld| |%#-7.3zd|\n", 5, 676, 8, 123456789, -543, 9876); 
    ft_printf("|%+3ld| |%-#3.6hd| |%0.0jd| |%+06.12hhd| |%-07lld| |%#-7.3zd|\n", 5, 676, 8, 123456789, -543, 9876); 

    printf("\n|%+3lD| |%-#3.6hD| |%0.0jD| |%+06.12hhD| |%-07llD| |%#-7.3zD|\n", -435, -676, -47478, -123456789, -543, -9876); 
    ft_printf("|%+3lD| |%-#3.6hD| |%0.0jD| |%+06.12hhD| |%-07llD| |%#-7.3zD|\n", -435, -676, -47478, -123456789, -543, -9876); 


    printf("\n\n/****************************************************   TEST c   *******************************************************/\n");
    printf("%d\n", printf("|%+05.12c| |%+ 4c| |%13c| |%-07c| |%012c| |%#1c|\n", c, 'a', 'b', 'c', 'd', 'e'));
    ft_printf("%d\n", ft_printf("|%+05.12c| |%+ 4c| |%13c| |%-07c| |%012c| |%#1c|\n", c, 'a', 'b', 'c', 'd', 'e'));

    printf("|%+3lc| |%-#3.6hc| |%0.0jc| |%+06.12hhc| |%-07llc| |%#-7.3zc|\n", 'a', 'b', 'c', 'd', 'e', 'f'); 
    ft_printf("|%+3lc| |%-#3.6hc| |%0.0jc| |%+06.12hhc| |%-07llc| |%#-7.3zc|\n", 'a', 'b', 'c', 'd', 'e', 'f'); 


    printf("\n\n/*******************************************************   TEST s   *****************************************************/\n"); 
    printf("%d\n", printf("|%#0.23s| |%3s| |%04s| |%-04s| |%+011s| |%07.2s| |%-8.4s|\n", "salut", "42", "32", "wq", "43", "salut", "123456789"));
    ft_printf("%d\n", ft_printf("|%#0.23s| |%3s| |%04s| |%-04s| |%+011s| |%07.2s| |%-8.4s|\n", "salut", "42", "32", "wq", "43", "salut", "123456789"));

    printf("|%-#3.6hs| |%0.0js| |%+06.12hhs| |%-07lls| |%#-7.3zs|\n", "qwerty", "qwerty", "qwerty", "qwerty", "qwerty"); 
    ft_printf("|%-#3.6hs| |%0.0js| |%+06.12hhs| |%-07lls| |%#-7.3zs|\n", "qwerty", "qwerty", "qwerty", "qwerty", "qwerty"); 


    printf("\n\n/******************************************************   TEST x X   ****************************************************/\n");
    printf("%d\n", printf("%x%x%x%x%x%x%x\n", 1, 4, 10, 100, 1000, 10000, 99999999));
    ft_printf("%d\n", ft_printf("%x%x%x%x%x%x%x\n", 1, 4, 10, 100, 1000, 10000, 99999999));
    printf("%d\n", printf("|%x| |%#08x| |%#-08x| |%#x| |%#08.0X| |%#-06x| |%++++++-0-++++06X| |%9.6x|\n", 4, 43, 23, 954, 971, 34, 31, 23));
    ft_printf("%d\n", ft_printf("|%x| |%#08x| |%#-08x| |%#x| |%#08.0X| |%#-06x| |%++++++-0-++++06X| |%9.6x|\n", 4, 43, 23, 954, 971, 34, 31, 23));

    printf("%d\n", printf("|%+3lx| |%8hhx| |%-#3.6hx| |%0.0jx| |%+06.12hhx| |%-07llx| |%#-7.3zx|\n", 5, 7843 ,43, 548, 123456789, 123, 9876)); 
    ft_printf("%d\n", ft_printf("|%+3lx| |%8hhx| |%-#3.6hx| |%0.0jx| |%+06.12hhx| |%-07llx| |%#-7.3zx|\n", 5, 7843 ,43, 548, 123456789, 123, 9876)); 

    printf("%d\n", printf("|%+3lX| |%-#3.6hX| |%0.0jX| |%+06.12hhX| |%-07llX| |%#-7.3zX|\n", -435, -676, -47478, -123456789, -543, -9876)); 
    ft_printf("%d\n", ft_printf("|%+3lX| |%-#3.6hX| |%0.0jX| |%+06.12hhX| |%-07llX| |%#-7.3zX|\n", -435, -676, -47478, -123456789, -543, -9876)); 


    printf("%d\n", printf("%x%x%x%x%x\n", 1, 100, 999, 42, 999988888));
    ft_printf("%d\n", ft_printf("%x%x%x%x%x\n", 1, 100, 999, 42, 999988888));


    printf("\n\n/******************************************************   TEST u U   ******************************************************/\n");
    printf("%d\n", printf("|%012u| |%09U| |%#-05u| |% .20u| |%-09.5u| |%+11u|\n", nbr, +21, 5, -4, 8, 3));
    ft_printf("%d\n", ft_printf("|%012u| |%09U| |%#-05u| |% .20u| |%-09.5u| |%+11u|\n", nbr, +21, 5, -4, 8, 3));

    printf("\n|%+3lu| |%-#3.6hu| |%0.0ju| |%+06.12hhu| |%-07llu| |%#-7.3zu|\n", 5, 63, 8, 123456789, 543, 9876); 
    ft_printf("|%+3lu| |%-#3.6hu| |%0.0ju| |%+06.12hhu| |%-07llu| |%#-7.3zu|\n", 5, 63, 8, 123456789, 543, 9876); 

    printf("\n|%+3lU| |%-#3.6hU| |%0.0jU| |%+06.12hhU| |%-07llU| |%#-7.3zU|\n", -435, -676, -47478, -123456789, -543, -876); 
    ft_printf("|%+3lU| |%-#3.6hU| |%0.0jU| |%+06.12hhU| |%-07llU| |%#-7.3zU|\n", -435, -676, -47478, -123456789, -543, -876); 



    printf("\n\n/*****************************************************   TEST o O   ******************************************************/\n");
    printf("|%#o| |%#-.4o| |%012o| |%-#6o| |%+06.4o| |%-4o| |%#-5.11o|\n", 10, 12, 21, 11, 12, 5, 54);
    ft_printf("|%#o| |%#-.4o| |%012o| |%-#6o| |%+06.4o| |%-4o| |%#-5.11o|\n", 10, 12, 21, 11, 12, 5, 54);

    printf("%d\n", printf("%o%o%o%o%o\n", 1, 100, 999, 42, 999988888));
    ft_printf("%d\n", ft_printf("%o%o%o%o%o\n", 1, 100, 999, 42, 999988888));
    

    printf("%d\n", printf("%O%O%O%O%O\n", 1, 100, 999, 42, 999988888));
    ft_printf("%d\n", ft_printf("%O%O%O%O%O\n", 1, 100, 999, 42, 999988888));


    printf("\n|%+3lo| |%-#3.6ho| |%0.0jo| |%+06.12hho| |%-07llo| |%#-7.3zo|\n", 5, 6764343, 8, 123456789, 543, 9876); 
    ft_printf("|%+3lo| |%-#3.6ho| |%0.0jo| |%+06.12hho| |%-07llo| |%#-7.3zo|\n", 5, 6764343, 8, 123456789, 543, 9876); 

    printf("\n|%+3lO| |%-#3.6hO| |%0.0jO| |%+06.12hhO| |%-07llO| |%#-7.3zO|\n", -435, -676, -47478, -123456789, -543, -9876); 
    ft_printf("|%+3lO| |%-#3.6hO| |%0.0jO| |%+06.12hhO| |%-07llO| |%#-7.3zO|\n", -435, -676, -47478, -123456789, -543, -9876); 



    printf("\n\n/******************************************************   TEST P   ******************************************************/\n");
    printf("|%p| |%016p| |%-16p| |%14.4p| |%p|\n", str, str, nbr, c);
    ft_printf("|%p| |%016p| |%-16p| |%14.4p| |%p|\n", str, str, nbr, c);

    printf("\n|%+3lp| |%-#3.6hp| |%0.0jp| |%+06.12hhp| |%-07llp| |%#-7.3zp|\n", str, nbr, c, c, nbr, str); 
    ft_printf("|%+3lp| |%-#3.6hp| |%0.0jp| |%+06.12hhp| |%-07llp| |%#-7.3zp|\n", str, nbr, c, c, nbr, str); 


    printf("\n\n/*****************************************************    TEST C S    *****************************************************/\n");
    printf("%d\n", printf("|%-8C| |%#0 9lc| |%S|\n", myChar1, L'ℜ', L"ο Δικαιοπολις"));
    ft_printf("%d\n", ft_printf("|%-8C| |%#0 9lc| |%S|\n", myChar1, L'ℜ', L"ο Δικαιοπολις"));


    printf("\n\n/******************************************************   TEST WTF   ******************************************************/\n");
    printf("|%xoxoxoxo| |%0000000000000x| |%-7llllllllllllx| |%#hhhhhhhhhhx| |%#----######-######08.0X| |%#-###-----#0++ #####9.8o| |%++++++-0-+++  +++----06X|\n", 43, -54, 95, 9, 532, 467349478438, -555);
//  ft_printf("|%xoxoxoxo| |%0000000000000x| |%-7llllllllllllx| |%#hhhhhhhhhhx| |%#----######-######08.0X| |%#-###-----#0++ #####9.8o| |%++++++-0-+++  +++----06X|\n", 43, -54, 95, 9, 532, 467349478438, -555);


    printf("\n\n/******************************************************   TEST NULL   ******************************************************/\n");

    printf("%d\n", printf("|%-10d| |%c| |%s| |%u| |%C| |%p| |%i| |%S| |%U| |%x| |%X| |%o|  \n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
    ft_printf("%d\n", ft_printf("|%-10d| |%c| |%s| |%u| |%C| |%p| |%i| |%S| |%U| |%x| |%X| |%o|  \n", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));

    printf("\n\n/******************************************************   VALEUR RETOUR   ******************************************************/\n");


    printf("%d\n", printf("\n|%+3lx| |%8hhx| |%-#3.6hx| |%0.0jx| |%+06.12hhx| |%-07llx| |%#-7.3zx|\n", 5, 7843 ,43, 548, 123456789, 123, 9876)); 
    ft_printf("%d\n", ft_printf("\n|%+3lx| |%8hhx| |%-#3.6hx| |%0.0jx| |%+06.12hhx| |%-07llx| |%#-7.3zx|\n", 5, 7843 ,43, 548, 123456789, 123, 9876)); 

    printf("%d\n", printf("|%p| |%016p| |%-16p|\n", str, str, nbr));
    ft_printf("%d\n", ft_printf("|%p| |%016p| |%-16p|\n", str, str, nbr));

    printf("%d\n", printf("|%xoxoxoxo| |%0000000000000x| |%-7llllllllllllx| |%#hhhhhhhhhhx| |%#----######-######08.0X| |%#-###-----#0++ #####9.8o| |%++++++-0-+++  +++----06X|\n", 43, -54, 95, 9, 532, 467349478438, -555));
    //ft_printf("%d\n", ft_printf("|%xoxoxoxo| |%0000000000000x| |%-7llllllllllllx| |%#hhhhhhhhhhx| |%#----######-######08.0X| |%#-###-----#0++ #####9.8o| |%++++++-0-+++  +++----06X|\n", 43, -54, 95, 9, 532, 467349478438, -555));

    printf("%d\n", printf("|%#o| |%#-.4o| |%012o| |%-#6o| |%+06.4o| |%-4o| |%#-5.11o|\n", 10, 12, 21, 11, 12, 5, 54));
    ft_printf("%d\n", ft_printf("|%#o| |%#-.4o| |%012o| |%-#6o| |%+06.4o| |%-4o| |%#-5.11o|\n", 10, 12, 21, 11, 12, 5, 54));
    
}
