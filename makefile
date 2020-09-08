NAME = proga

PATH_SRC = ./src/

HEADER = ./includes/

FLAG = -Wall -Wextra -Werror

OPTION = -c -I $(HEADER)

SRC = $(PATH_SRC)string.cpp $(PATH_SRC)strlen.cpp

OBJ = $(SRC:.c=.o)

.c.o:
	g++ $(FLAG) -I includes $< -o ${<:.c=.o}


$(NAME): ${OBJ}
		

all: $(NAME)

clean:
		rm -f $(OBJ) $(NAME)

fclean: clean
				
