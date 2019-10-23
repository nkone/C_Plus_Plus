# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phtruong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/23 13:31:12 by phtruong          #+#    #+#              #
#    Updated: 2019/10/23 13:38:00 by phtruong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= replace
CC		:= clang++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror
SRS		:= main.cpp
OBJ		:= main.o


all		: $(NAME)

$(NAME)	: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o		: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all
	
