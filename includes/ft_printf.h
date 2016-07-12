/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 00:48:33 by plefebvr          #+#    #+#             */
/*   Updated: 2016/07/12 17:24:02 by plefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../src/libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct			s_retlist
{
	char 				*data;
	int					ret;
	struct s_retlist	*next;
}						t_lst;

typedef struct			s_info
{
	char				*flags;
	int					minfield;
	int					star_minfield;
	int					true_precision;
	int					precision;
	int					star_precision;
	char				*lenght;
	char				letter;
	int					stars;
	int					ret;
	char				sign;
	t_lst				*lst;
	t_lst				*lst_first;
}						t_info;

char		*ft_itoa_ll(long long n, t_info *info);
char		*ft_itoa_test(int n, t_info *info);

int			ft_printf(const char *fmt, ...);
int			ft_isletter(char c);
int			ft_print_list(t_info *info);
int			ft_dio(t_info *info);

void		ft_init_strct(t_info *info);
void		ft_epur_fmt(t_info *info, const char *fmt, int *i);
void		ft_gotoindex(const char *fmt, unsigned int *i, unsigned int *j);
void		ft_put_in_lst(t_info *info, char *input);
void		ft_check_flag(const char *fmt, int *i, char *dest);
void		ft_parse_arg(const char *fmt, int *i, t_info *info);
void		ft_clean_info(t_info *info);
void		ft_stars(int value, t_info *info);
void		ft_work(void *ap, t_info *info);
void		ft_dioux(void *ap, t_info *info);
void		ft_dioux_lenght(void *ap, t_info *info);

t_lst		*ft_create_list(const char *fmt);
t_lst		*ft_create_link(char *input);

#endif
