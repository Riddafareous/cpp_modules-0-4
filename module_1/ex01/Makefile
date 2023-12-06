# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arybushk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 18:56:26 by arybushk          #+#    #+#              #
#    Updated: 2023/11/03 18:56:28 by arybushk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombieHorde

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:%.cpp=%.o)

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
