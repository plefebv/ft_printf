# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plefebvr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/31 18:17:14 by plefebvr          #+#    #+#              #
#    Updated: 2016/08/25 13:50:25 by plefebvr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = ./src/libft/libft.a
SRC_PATH= ./src/
OBJ_PATH = ./src/obj/
INC_PATH = ./includes/
SRC = ft_printf.c \
	ft_lst_utils.c \
	ft_first_utils.c\
	ft_flag.c \
	ft_parse.c \
	ft_init.c \
	ft_work.c \
	ft_dioux.c \
	ft_itoa_ll.c \
	ft_add_sign.c \
	ft_parse_letter.c \
	ft_precision_dioux.c \
	ft_minfield.c \
	ft_di.c \
	ft_u.c
	  
OBJ = $(SRC:.c=.o)

SRCS = $(addprefix $(SRC_PATH), $(SRC))
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))

RED = tput bold ; tput setaf 1
BLU = tput bold ; tput setaf 4
GRN = tput bold ; tput setaf 2
CYN = tput bold ; tput setaf 6
WHT = tput setaf 7
RESET = tput sgr 0

all : lib $(NAME)


lib :
	@make -C src/libft/


$(NAME) : $(OBJS)
	@$(BLU)
	@echo "	Create libftprintf.a \n"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@$(CYN)
	@echo " === Printf Compilation Success ==="
	@$(RESET)

$(OBJS) : $(SRCS)
	@$(CYN)
	@echo "\n\n === Start Printf Compilation ===\n"
	@$(BLU)
	@echo "	Create Printf objects"
	@gcc -c $(SRCS) -I./src/libft/libft.a
	@mkdir -p $(OBJ_PATH)
	@mv $(OBJ) $(OBJ_PATH)
	@$(RESET)

clean :
	@/bin/rm -f $(OBJS)
	@/bin/rm -rf $(OBJ_PATH)
	@$(BLU)
	@echo "	Clean Printf objects Done !"
	@make clean -C src/libft/
	@$(RESET)

fclean : clean
	@/bin/rm -f $(NAME)
	@$(BLU)
	@echo "	Clean $(NAME) Done !"	
	@make fclean -C src/libft/
	@$(BLU)
	@echo "	-->   All is clear   <--\n"
	@$(RESET)

re :
	@$(CYN)
	@echo " === Clean & Recompile Project ===\n"
	@$(RESET)
	@make fclean 
	@make
