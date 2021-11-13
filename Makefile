# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathmart <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 08:52:08 by mathmart          #+#    #+#              #
#    Updated: 2021/11/13 08:53:01 by mathmart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

-include Sources.mk

NAME = bsq

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror -O3 -g -I Includes

%.o: %.c $(HEADER)
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	gcc $(CFLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

gmk:
	find . -name "*.c" > Sources.mk