# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arybushk <arybushk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 22:07:23 by arybushk          #+#    #+#              #
#    Updated: 2023/12/04 17:15:36 by arybushk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

SRCS = main.cpp AMateria.cpp MateriaSource.cpp Character.cpp Cure.cpp Ice.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)