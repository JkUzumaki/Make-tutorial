all: Hello_Obj

Hello_Obj:	main.o hello.o factorial.o functions.h
	g++ main.o hello.o factorial.o -o Hello_Obj

main.o: main.cpp
	g++ -c main.cpp functions.h

hello.o: hello.cpp
	g++ -c hello.cpp functions.h

factorial.o: factorial.cpp
	g++ -c factorial.cpp functions.h

clean:
	rm -rf *o Hello_Obj
