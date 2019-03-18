#variables
CC=g++
CFLAGS = -g -Wall
RM = /bin/rm -f

all:main helloworld

frog.o: frog.h frog.cpp
	${CC} ${CFLAGS} -c frog.cpp

main.o: frog.h main.cpp
	${CC} ${CFLAGS} -c main.cpp

main: main.o frog.o
	${CC} ${CFLAGS} -o main main.o frog.o

helloworld: helloworld.cpp
	${CC} ${CFLAGS} -o helloworld helloworld.cpp

clean:
	${RM} *.o main helloworld
