#!/bin/bash

NAME = proga

CFLAGS = -Wall -Wextra -Werror

PATH = src/

RM = rm -f

SRC = ${PATH}string.cpp ${PATH}strlen.cpp

OBJ:= string.o strlen.o

.PHONY: all clean

string.o: ${PATH}string.cpp
	g++ -c ${CFLAGS} $< -o $@

strlen.o: ${PATH}strlen.cpp
	g++ -c ${CFLAGS} $< -o $@

${NAME}: ${OBJ}
	g++ -o $@ ${OBJ}

all: ${NAME}

clean:
		${RM} ${OBJ} 
