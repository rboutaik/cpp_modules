# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 12:30:19 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/23 13:09:38 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongCat.cpp WrongAnimal.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

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