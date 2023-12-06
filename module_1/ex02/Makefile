# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arybushk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 19:34:10 by arybushk          #+#    #+#              #
#    Updated: 2023/11/03 19:34:11 by arybushk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_this_is_brain

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

CC = g++

FLAGS = -WAll -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
