# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 05:37:21 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/10 05:44:04 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES =  main.cpp

O_FILES = $(C_FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(O_FILES)
	$(CC) -o $@ $(O_FILES)

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all
