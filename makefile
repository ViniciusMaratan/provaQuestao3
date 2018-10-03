all: main

main: main.o funcs.o
	gcc -o main main.o funcs.o

main.o: main.c funcs.h
	gcc -o main.o main.c -c -W -Wall -ansi -pedantic

funcs.o: funcs.c funcs.h
	gcc -o funcs.o funcs.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o *~ main
