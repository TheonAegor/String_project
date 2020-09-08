NAME = proga

PATH_SRC = ./src/

HEADER = ./includes/

FLAG = -Wall -Wextra -Werror

OPTION = -I $(HEADER)

SRC = $(PATH_SRC)string.cpp $(PATH_SRC)strlen.cpp

OBJ = string.o strlen.o

all: $(NAME)

$(NAME):
		g++ $(FLAG) $(OPTION) $(SRC) -o proga 

clean:
		rm -f $(OBJ)
fclean: clean
				
