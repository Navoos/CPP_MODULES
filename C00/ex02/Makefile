NAME = Bureau
SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++ -fsanitize=address

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< 

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $^ -o $@

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

