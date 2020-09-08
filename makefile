PATH_SRC = ./src/

HEADER = ./includes/

FLAG = -Wall -Wextra -Werror

OPTION = -c -I $(HEADER)

SRC = $(PATH_SRC)string.cpp

OBJ = string.o

all: $(OBJ)

$(OBJ):
		g++ $(FLAG) $(OPTION) $(SRC)

clean:
		rm -f $(OBJ)
fclean: clean
				
