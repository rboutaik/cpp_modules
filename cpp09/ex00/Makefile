
NAME = btc

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

C_FILES = main.cpp BitcoinExchange.cpp

O_FILES = $(C_FILES:.cpp=.o)

HEADERS = BitcoinExchange.hpp

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