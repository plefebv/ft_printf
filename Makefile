# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/02 13:57:36 by plefebvr          #+#    #+#              #
#    Updated: 2016/09/09 13:09:58 by plefebvr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FONCTIONS = src/ft_printf.c \
			src/ft_lst_utils.c \
			src/ft_first_utils.c\
			src/ft_flag.c \
			src/ft_parse.c \
			src/ft_init.c \
			src/ft_work.c \
			src/ft_dioux.c \
			src/ft_itoa_ll.c \
			src/ft_add_sign.c \
			src/ft_parse_letter.c \
			src/ft_precision_dioux.c \
			src/ft_minfield.c \
			src/ft_di.c \
			src/ft_u.c \
			src/ft_sc.c \
			src/ft_put_c.c \
			src/ft_put_s.c \
			src/ft_nbrlen_str.c \
			src/ft_spe.c

OBJ = ft_printf.o \
			ft_lst_utils.o \
			ft_first_utils.o \
			ft_flag.o \
			ft_parse.o \
			ft_init.o \
			ft_work.o \
			ft_dioux.o \
			ft_itoa_ll.o \
			ft_add_sign.o \
			ft_parse_letter.o \
			ft_precision_dioux.o \
			ft_minfield.o \
			ft_di.o \
			ft_u.o \
			ft_sc.o \
			ft_put_c.o \
			ft_put_s.o \
			ft_nbrlen_str.o \
			ft_spe.o

FONCTIONS_LIB = src/libft/ft_isascii.c src/libft/ft_lstdelone.c \
				src/libft/ft_memchr.c src/libft/ft_nbrendl.c \
				src/libft/ft_putnbr_fd.c src/libft/ft_strclr.c \
				src/libft/ft_striter.c src/libft/ft_strmapi.c \
				src/libft/ft_strnew.c src/libft/ft_strtrim.c \
				src/libft/ft_atoi.c src/libft/ft_isdigit.c \
				src/libft/ft_memcmp.c src/libft/ft_putchar.c \
				src/libft/ft_putstr.c src/libft/ft_strcmp.c  \
				src/libft/ft_striteri.c src/libft/ft_strncat.c \
				src/libft/ft_strnstr.c src/libft/ft_tolower.c \
				src/libft/ft_bzero.c src/libft/ft_isprint.c \
				src/libft/ft_lstmap.c src/libft/ft_memcpy.c \
				src/libft/ft_putchar_fd.c src/libft/ft_putstr_fd.c \
			   	src/libft/ft_strcpy.c src/libft/ft_strjoin.c \
				src/libft/ft_strncmp.c src/libft/ft_strrchr.c \
				src/libft/ft_toupper.c src/libft/ft_checkchar.c \
				src/libft/ft_itoa.c src/libft/ft_lstnew.c \
				src/libft/ft_memdel.c src/libft/ft_putendl.c \
				src/libft/ft_square.c src/libft/ft_strdel.c \
				src/libft/ft_strlcat.c src/libft/ft_strncpy.c \
				src/libft/ft_strsplit.c src/libft/ft_wordcount.c \
				src/libft/ft_isalnum.c src/libft/ft_lstadd.c \
				src/libft/ft_memalloc.c src/libft/ft_memmove.c \
				src/libft/ft_putendl_fd.c src/libft/ft_strcat.c \
				src/libft/ft_strdup.c src/libft/ft_strlen.c  \
				src/libft/ft_strndup.c src/libft/ft_strstr.c \
				src/libft/ft_isalpha.c src/libft/ft_lstdel.c \
				src/libft/ft_memccpy.c src/libft/ft_memset.c \
				src/libft/ft_putnbr.c src/libft/ft_strchr.c \
				src/libft/ft_strequ.c src/libft/ft_strmap.c \
				src/libft/ft_strnequ.c src/libft/ft_strsub.c \
				src/libft/ft_lstiter.c 

OBJ_O_LIB = ft_isascii.o ft_lstdelone.o ft_memchr.o ft_nbrendl.o \
			ft_putnbr_fd.o ft_strclr.o ft_striter.o ft_strmapi.o \
			ft_strnew.o ft_strtrim.o ft_atoi.o ft_isdigit.o \
			ft_lstiter.o ft_memcmp.o ft_putchar.o ft_putstr.o \
			ft_strcmp.o ft_striteri.o ft_strncat.o ft_strnstr.o \
			ft_tolower.o ft_bzero.o ft_isprint.o ft_lstmap.o \
			ft_memcpy.o ft_putchar_fd.o ft_putstr_fd.o ft_strcpy.o \
			ft_strjoin.o ft_strncmp.o ft_strrchr.o ft_toupper.o \
			ft_checkchar.o ft_itoa.o ft_lstnew.o ft_memdel.o \
			ft_putendl.o ft_square.o ft_strdel.o ft_strlcat.o \
			ft_strncpy.o ft_strsplit.o ft_wordcount.o \
			ft_isalnum.o ft_lstadd.o ft_memalloc.o ft_memmove.o \
			ft_putendl_fd.o ft_strcat.o ft_strdup.o ft_strlen.o \
			ft_strndup.o ft_strstr.o ft_isalpha.o ft_lstdel.o \
			ft_memccpy.o ft_memset.o ft_putnbr.o ft_strchr.o \
			ft_strequ.o ft_strmap.o ft_strnequ.o ft_strsub.o

HEADER = includes/libftprintf.h
HEADER_LIB = src/libft/includes/libft.h

FLAG = 

DISP_ERROR = -Ddisp_error

all: $(NAME)

$(NAME):
	/usr/bin/gcc $(FLAG) -c $(FONCTIONS) $(FONCTIONS_LIB) -I $(HEADER) $(HEADER_LIB)
	/usr/bin/ar rc $(NAME) $(OBJ) $(OBJ_O_LIB)
	/usr/bin/ranlib $(NAME)

disp_error:
	/usr/bin/gcc $(DISP_ERROR) $(FLAG) -c $(FONCTIONS) $(FONCTIONS_LIB) -I $(HEADER) $(HEADER_LIB)
	/usr/bin/ar rc $(NAME) $(OBJ) $(OBJ_O_LIB)
	/usr/bin/ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(OBJ_O_LIB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean
	make
