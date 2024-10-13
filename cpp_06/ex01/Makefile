# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/30 17:02:12 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/30 20:04:39 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = Data.cpp main.cpp Serializer.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = Data.hpp Serializer.hpp

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