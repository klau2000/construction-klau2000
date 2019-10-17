all: construction.o
	gcc -o output construction.o

construction.o: construction.c header.h
	gcc -c construction.c

run:
	./output

clean:
	rm *.o
	rm *~
