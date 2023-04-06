NAME = phonebook
C = c++
FLAGS = -Wall -Wextra -Werror
SOURCE = main.cpp PhoneBook.cpp Contact.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)

all: 		$(NAME)

$(NAME):	$(OBJ)
			$(C) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re