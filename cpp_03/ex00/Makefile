# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 04:00:10 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/16 04:55:30 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = ClapTrap.cpp main.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = ClapTrap.hpp

all : $(NAME)

$(NAME) : $(O_FILES)
	$(CC) $(FLAGS) -o $@ $(O_FILES)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all