# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 11:27:31 by gissao-m          #+#    #+#              #
#    Updated: 2022/10/17 15:30:24 by gissao-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
INCLUDE = -I ./include/
CFLAGS = -g $(INCLUDE)

RM = rm -rf

LIBFT = ./libft/libft.a
PATH_SRC = ./src/
PATH_LIBFT = $(PATH_INCLUDE)libft/
PATH_MAIN = $(PATH_SRC)main/
PATH_MOVEMENT = $(PATH_SRC)movement/
PATH_SORT = $(PATH_SRC)sort/
PATH_UTILS = $(PATH_SRC)utils/
PATH_OBJS = ./objs/

SRC =	$(PATH_MAIN)main.c\
		$(PATH_MOVEMENT)push.c\
		$(PATH_MOVEMENT)rotate.c\
		$(PATH_MOVEMENT)reverse_rotate.c\
		$(PATH_MOVEMENT)swap.c\
		$(PATH_SORT)sort.c\
		$(PATH_SORT)simple_sort.c\
		$(PATH_SORT)complex_sort.c\
		$(PATH_UTILS)error.c\
		$(PATH_UTILS)find.c\
		$(PATH_UTILS)make_stack.c\
		$(PATH_UTILS)ft_atol.c\
		$(PATH_UTILS)free.c\

OBJS = $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(SRC))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME) -L ./libft -lft

$(PATH_OBJS)%.o: $(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)libft/
	@mkdir -p $(PATH_OBJS)main/
	@mkdir -p $(PATH_OBJS)movement/
	@mkdir -p $(PATH_OBJS)sort/
	@mkdir -p $(PATH_OBJS)utils/
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C ./libft

clean:
	$(RM) ./objs

fclean: clean
	$(RM) $(NAME) 
	make fclean -C ./libft

re: fclean all

.PHONY: all $(PATH_OBJS) clean fclean re