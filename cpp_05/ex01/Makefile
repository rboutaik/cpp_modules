# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rboutaik <rboutaik@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/27 21:43:53 by rboutaik          #+#    #+#              #
#    Updated: 2024/09/28 12:10:28 by rboutaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = Bureaucrat.cpp main.cpp Form.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = Bureaucrat.hpp Form.hpp

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