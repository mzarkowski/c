CFLAGS = -Wall

ll: compile link test clean

compile: main.c funkcja.c funkcja.h
	gcc -c main.c funkcja.c
link: main.o funkcja.o
	cc main.o funkcja.o

test: a.out
	cat test1
	./a.out < test1
	cat test2
	./a.out < test2
	cat test3
	./a.out < test3

clean:
	rm -f *.o *.out *~
