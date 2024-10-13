# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 15:58:58 by rboutaik          #+#    #+#              #
#    Updated: 2024/10/01 16:30:12 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = iter.hpp

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