# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefie                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arybushk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 16:35:33 by arybushk          #+#    #+#              #
#    Updated: 2023/11/10 16:35:34 by arybushk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Now_were_talking

SRCS = main.cpp Fixed.cpp

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

