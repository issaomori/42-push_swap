# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gissao-m <gissao-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 14:40:41 by gissao-m          #+#    #+#              #
#    Updated: 2022/10/05 12:38:30 by gissao-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ./libft.h

SRCS = ./ft_isalpha.c \
		./ft_isdigit.c \
		./ft_isalnum.c \
		./ft_isascii.c \
		./ft_isprint.c \
		./ft_strlen.c \
		./ft_memset.c \
		./ft_bzero.c \
		./ft_memcpy.c \
		./ft_memmove.c \
		./ft_strlcpy.c \
		./ft_strlcat.c \
		./ft_toupper.c \
		./ft_tolower.c \
		./ft_strchr.c \
		./ft_strrchr.c \
		./ft_strncmp.c \
		./ft_memchr.c \
		./ft_memcmp.c \
		./ft_strnstr.c \
		./ft_atoi.c \
		./ft_calloc.c \
		./ft_strdup.c \
		./ft_substr.c \
		./ft_strjoin.c \
		./ft_strtrim.c \
		./ft_split.c \
		./ft_itoa.c \
		./ft_strmapi.c \
		./ft_striteri.c \
		./ft_putchar_fd.c \
		./ft_putstr_fd.c \
		./ft_putendl_fd.c \
		./ft_putnbr_fd.c \
		./ft_lst_size.c\
		./ft_lstnew.c\
		./ft_lstadd_front.c\
		./ft_lstadd_back.c\
		./ft_lstclear.c\
		./ft_lstdelone.c\
		./ft_lstiter.c\
		./ft_lstlast.c\
		./ft_lstmap.c\
		
CFLAGS =  -Wall -Wextra -Werror

CC = gcc

OBJS = ${SRCS:.c=.o}

all:        $(NAME)

$(NAME):    $(OBJS)
			ar -rcs $(NAME) $(OBJS)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:

	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all