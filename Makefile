# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcluchet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 10:47:39 by pcluchet          #+#    #+#              #
#    Updated: 2017/03/28 18:55:20 by pcluchet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

####### CHECKER #######

NAME_CHK = checker

SRC_DIR_CHK = ./checker_src/

C_FILES_CHK = main.c \
debug.c \
lister_engine.c \
lister_utils.c \
oper1.c \
oper2.c \
oper3.c \

C_WITH_PATH_CHK = $(addprefix $(SRC_DIR_CHK),$(C_FILES_CHK))

O_FILES_CHK = $(C_WITH_PATH_CHK:.c=.o)

###### PUSH_SWAP ######

NAME_PSWAP = push_swap

SRC_DIR_PSWAP = ./push_swap_src/

C_FILES_PSWAP = main.c \
attrib_id.c \
barely_short_sort.c \
cnt_list.c \
destroyer.c \
do_classic_a.c \
do_oper_ps.c \
free_everything.c \
ft_lstclonerev.c \
ft_sqrt.c \
gen_id.c \
get_pivot.c \
id_of.c \
list_above_id.c \
list_delfirst.c \
list_last_id.c \
list_last_val.c \
list_maxi.c \
list_r.c \
list_rr.c \
pivot_a.c \
pivot_b.c \
printints.c \
set_lstlen.c \
short_sort.c \
short_sort_a.c \
shortest_way_eq.c \
sort_ints.c \
.$(SRC_DIR_CHK)lister_engine.c \
.$(SRC_DIR_CHK)lister_utils.c \
.$(SRC_DIR_CHK)debug.c \
.$(SRC_DIR_CHK)oper1.c \
.$(SRC_DIR_CHK)oper2.c \
.$(SRC_DIR_CHK)oper3.c \

C_WITH_PATH_PSWAP = $(addprefix $(SRC_DIR_PSWAP),$(C_FILES_PSWAP))

O_FILES_PSWAP = $(C_WITH_PATH_PSWAP:.c=.o)

######### MISC ########

CC = gcc

EXTRAFLAGS = -Wall -Wextra -Werror

CFLAGS =  -I$(LIBFT_DIR)includes/ -I$(H_DIR) $(EXTRAFLAGS)

LIBFT_DIR = ./libft/

H_DIR = ./includes/

LINKS = -L $(LIBFT_DIR) -lft

all : libs $(NAME_CHK) $(NAME_PSWAP)

######### RULES #######

$(NAME_CHK) : $(O_FILES_CHK)
	$(CC) -o $(NAME_CHK) $(O_FILES_CHK) $(CFLAGS) $(LINKS)

$(NAME_PSWAP) : $(O_FILES_PSWAP)
	$(CC) -o $(NAME_PSWAP) $(O_FILES_PSWAP) $(CFLAGS) $(LINKS)

clean :
	rm -f $(O_FILES_CHK) 
	rm -f $(O_FILES_PSWAP) 
	make -C $(LIBFT_DIR) clean

fclean : clean
	rm -f $(NAME_CHK)
	rm -f $(NAME_PSWAP)
	rm -f $(LIBFT_DIR)libftprintf.a

re : 
	$(MAKE) fclean
	$(MAKE) all

libs:
	make -C $(LIBFT_DIR)

.PHONY: all re clean fclean libs
