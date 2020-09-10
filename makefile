EXECTUABLE = proga
SRC = ./src/string.cpp ./src/strlen.cpp
OBJ = $(SRC:.cpp=.o)


all: $(SRC) $(EXECTUABLE)

$(EXECTUABLE): $(OBJ)
	g++ $(OBJ) -I includes -o $@

.cpp.o: 
	g++ -I includes -c $< -o $@

clean:
	rm -f ${OBJ} proga

