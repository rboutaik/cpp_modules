# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 21:06:33 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/02 21:26:48 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp Contact.cpp PhoneBook.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADER_FILES = Contact.hpp PhoneBook.hpp

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
