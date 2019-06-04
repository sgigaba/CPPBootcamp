NAME    =   phonebook

SRC     =   phonebook.cpp

OBJ     =   $(SRC:.cpp=.o)

FLAG    =   -Wall -Wextra -Werror
all:        $(NAME)
$(NAME): fclean
			clang++ $(FLAG) -c $(SRC)
			clang++ -o $(NAME) $(OBJ)
			make clean
clean:
			/bin/rm -f $(OBJ)
fclean: clean
			/bin/rm -f $(NAME)
re: fclean all