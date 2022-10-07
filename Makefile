# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 11:27:31 by gissao-m          #+#    #+#              #
#    Updated: 2022/10/06 16:29:51 by gissao-m         ###   ########.fr        #
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
PATH_OBJS = ./objs/

SRC =	$(PATH_MAIN)main.c\
		$(PATH_MAIN)push.c\
		$(PATH_MAIN)error.c\
		$(PATH_MAIN)swap.c\

OBJS = $(patsubst $(PATH_SRC)%.c, $(PATH_OBJS)%.o, $(SRC))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME) -L ./libft -lft

$(PATH_OBJS)%.o: $(PATH_SRC)%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)libft/
	@mkdir -p $(PATH_OBJS)main/
	@mkdir -p $(PATH_OBJS)paths/
	@mkdir -p $(PATH_OBJS)process/
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