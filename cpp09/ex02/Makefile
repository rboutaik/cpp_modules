

NAME = PmergeMe

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp PmergeMe.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = PmergeMe.hpp

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