# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phtruong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 13:28:19 by phtruong          #+#    #+#              #
#    Updated: 2019/10/21 13:30:02 by phtruong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook
CC		:= clang++
FLAGS	:= -Wall -Wextra -Werror
FILES	:= main.cpp
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
