string.o: ./src/string.cpp
	g++ -c  -o string.o ./src/string.cpp -I includes
strlen.o: ./src/strlen.cpp
	g++ -c  -o strlen.o ./src/strlen.cpp -I includes

proga: string.o strlen.o
	g++ -o proga strlen.o string.o 

clean:
	rm -f *.o proga
