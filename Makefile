# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathmart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 08:52:08 by mathmart          #+#    #+#              #
#    Updated: 2021/11/16 01:26:25 by mathmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = Srcs/main.c Srcs/Functions/ft_arg_c.c Srcs/Functions/ft_arg_d.c \
	Srcs/Functions/ft_arg_i.c Srcs/Functions/ft_arg_majx.c Srcs/Functions/ft_arg_p.c \
	Srcs/Functions/ft_arg_percent.c Srcs/Functions/ft_arg_s.c Srcs/Functions/ft_arg_u.c \
	Srcs/Functions/ft_arg_x.c Srcs/Utils/ft_putchar.c Srcs/Utils/ft_putnbr.c \
	Srcs/Utils/ft_putstr.c Srcs/Utils/ft_putunbr.c Srcs/Utils/ft_strlen.c

OBJS = $(SRCS:.c=.o)

HEADER = ./Includes/ft_printf.h

CFLAGS = -Wall -Wextra -Werror -O3 -g -I Includes

%.o: %.c $(HEADER)
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: gmk $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) test

re: fclean all

.PHONY: re fclean clean all