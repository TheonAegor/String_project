string.o: ./src/string.cpp
	g++ -c $< -o string.o ./includes/string.h
strlen.o: ./src/strlen.cpp
	g++ -c $< -o strlen.o ./includes/string.h

proga: string.o strlen.o
	g++ -o proga strlen.o string.o ./includes/string.h
