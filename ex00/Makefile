NAME = megaphone
C = c++
FLAGS = -Wall -Wextra -Werror
SOURCE = Megaphone.cpp
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