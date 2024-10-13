# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 05:31:31 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/15 01:24:03 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = Fixed.cpp main.cpp Point.cpp bsp.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = Fixed.hpp Point.hpp

all : $(NAME)

$(NAME) : $(O_FILES)
	$(CC) -o $@ $(O_FILES)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all