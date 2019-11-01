# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phtruong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 20:27:31 by phtruong          #+#    #+#              #
#    Updated: 2019/10/31 19:36:20 by phtruong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= template
CC		:= clang++
FLAGS	:= -std=c++98 -Wall -Wextra -Werror

FILES	:= whatever.cpp 
OBJ		:= $(FILES:.cpp=.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY: all, clean, fclean, re
