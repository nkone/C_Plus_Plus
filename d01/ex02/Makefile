# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phtruong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 17:32:04 by phtruong          #+#    #+#              #
#    Updated: 2019/10/21 17:36:33 by phtruong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= zombie
CC		:= clang++
CFLAGS	:= -Wall -Wextra -Werror
FILES	:= main.cpp Zombie.cpp ZombieEvent.cpp
OBJ		:= $(FILES:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all, clean, fclean, re
