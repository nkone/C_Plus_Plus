# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phtruong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 16:08:19 by phtruong          #+#    #+#              #
#    Updated: 2019/10/18 16:16:17 by phtruong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone
CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror
FILES	:= megaphone.cpp
OBJ		:= $(FILES:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: all

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY: clean, fclean, re
