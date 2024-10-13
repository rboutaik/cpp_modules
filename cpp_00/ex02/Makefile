# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 11:14:16 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/07 23:11:56 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = tests.cpp Account.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADER_FILES = Account.hpp

all : $(NAME)

$(NAME) : $(O_FILES)
	$(CC) -o $@ $(O_FILES)

%.o : %.cpp $(HEADER_FILES)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re : fclean all