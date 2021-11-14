# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathmart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 08:52:08 by mathmart          #+#    #+#              #
#    Updated: 2021/11/14 21:23:55 by mathmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include Sources.mk

NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

HEADER = ./Includes

CFLAGS = -Wall -Wextra -Werror -O3 -g -I Includes

%.o: %.c $(HEADER)
	gcc $(CFLAGS) -c $< -o $@

$(NAME): gmk $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: gmk $(NAME)

test: $(OBJS)
	gcc $(OBJS) -o test

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

gmk:
	echo "SRCS +=" > Sources.mk
	echo "`find Srcs -name '*.c' | sed 's/^/SRCS += /'`" >> Sources.mk

norm:
	norminette

.PHONY: norm gmk re fclean clean all