#! /bin/bash

CC=g++-14
CF=-std=c++23 -c -Wall -Wextra
#DF=-DDEBUG
TARGET=library

SRC_FILES = $(shell ls ./*.cpp)

OBJ_FILES = $(SRC_FILES:.cpp=.o)
	
${TARGET}: $(OBJ_FILES)
	${CC} -o ${TARGET} ${OBJ_FILES}

%.o: %.cpp $(shell ls ./*.h)
	${CC} ${CF} ${DF} $<

clean:
	rm *.o
	rm ${TARGET}
