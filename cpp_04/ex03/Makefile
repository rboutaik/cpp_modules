# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 18:38:07 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/27 16:08:24 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = AMateria.cpp Character.cpp Cure.cpp main.cpp Ice.cpp MateriaSource.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp IMateriaSource.hpp ICharacter.hpp

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