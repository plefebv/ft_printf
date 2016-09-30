/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 00:48:33 by plefebvr          #+#    #+#             */
/*   Updated: 2016/09/30 18:14:25 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../src/libft/includes/libft.h"
# include "../src/libft/includes/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct				s_retlist
{
	char					*data;
	unsigned long long		ret;
	unsigned long long		mfw_n;
	struct s_retlist		*next;
}							t_lst;

typedef struct				s_info
{
	char					*flags;
	int						minfield;
	int						star_minfield;
	int						true_precision;
	int						precision;
	int						star_precision;
	char					*length;
	char					letter;
	int						stars;
	unsigned long long		ret;
	int						ret_tmp;
	int						ret_c;
	char					sign;
	t_lst					*lst;
	t_lst					*lst_first;
}							t_info;

char						*ft_itoa_ll(long long n, t_info *info);
char						*ft_itoa_ull(unsigned long long n);
char						*ft_space_strig(int size, t_info *info);
char						*ft_strsub_spe(t_info *info, int add,\
		unsigned long long i);
char						*ft_strjoin_spe(char *str, t_info *info,\
		int add, int tmp);
char						*ft_strjoin_c_null(char *s1, t_info *info,\
		unsigned long long mfw);

unsigned int				ft_size_ws(wchar_t *ap);

int							ft_printf(const char *fmt, ...);
int							ft_isletter(char c);
int							ft_print_list(t_info *info);
int							ft_dio(t_info *info);
int							ft_cih(char *s, int c);
int							ft_size_nbr(char *s);
int							ft_isupper0(char c);
int							ft_nbrlen_str(char *s);
int							ft_size_wc(wchar_t ap);

void						ft_init_strct(t_info *info);
void						ft_epur_fmt(t_info *info, const char *fmt, int *i);
void						ft_gotoindex(const char *fmt, unsigned int *i,\
		unsigned int *j);
void						ft_put_in_lst(t_info *info, char *input);
void						ft_check_flag(const char *fmt, int *i, char *dest);
void						ft_parse_arg(const char *fmt, int *i, t_info *info,\
		va_list ap);
void						ft_clean_info(t_info *info);
void						ft_stars(int value, t_info *info, int *i,\
		const char *fmt);
void						ft_work(void *ap, t_info *info);
void						ft_dioux(void *ap, t_info *info);
void						ft_di_length(void *ap, t_info *info);
void						ft_dioux_length(void *ap, t_info *info);
void						ft_u_length(void *ap, t_info *info);
void						ft_u(void *ap, t_info *info);
void						ft_di(void *ap, t_info *info);
void						ft_special_letter(t_info *info, char c);
void						ft_special_letter2(t_info *info, char c);
void						ft_add_sign_diu(t_info *info);
void						ft_add_positive_diu(t_info *info);
void						ft_add_negative_di(t_info *info);
void						ft_add_space_diu(t_info *info);
void						ft_put_letter(const char *fmt, int *i,\
		t_info *info);
void						ft_precision_dioux(void *ap, t_info *info);
void						ft_add_precision_dioux(t_info *info, int add);
void						ft_add_char(char **s, int add, char c);
void						ft_minfield(t_info *info);
void						ft_add_minfield_l(t_info *info, int add, char c);
void						ft_add_minfield_r(t_info *info, int add, char c);
void						ft_sc(void *ap, t_info *info);
void						ft_put_wc(wchar_t ap, t_info *info);
void						ft_put_char(char ap, t_info *info);
void						ft_put_ws(void *ap, t_info *info);
void						ft_convert_wchar(wchar_t ap, t_info *info);
void						ft_percentage(t_info *info);
void						ft_treat_data(t_info *info);
void						ft_convert_ws_to_s(wchar_t ap, int i, t_info *info);
void						ft_hex(void *ap, t_info *info);
void						ft_octal(void *ap, t_info *info);
void						ft_precision_s(t_info *info);
void						ft_precision_p(void *ap, t_info *info);
void						pf_put_mfw2(t_info *info);
void						pf_hex2(void *ap, t_info *info);
void						pf_char_minfield(t_info *info, int left);

t_lst						*ft_create_list(const char *fmt);
t_lst						*ft_create_link(char *input);

#endif
