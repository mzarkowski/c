CFLAGS = -Wall

main: main.c funkcja.c funkcja.h
	gcc -c main.c funkcja.c
	cc main.o funkcja.o

clean: *.out *.o
	rm -rf *.out *.o *.*~

test: a.out
	./a.out tankowanie
