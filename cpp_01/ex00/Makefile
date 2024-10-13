# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 04:46:29 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/10 05:06:00 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = Zombie.hpp

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
