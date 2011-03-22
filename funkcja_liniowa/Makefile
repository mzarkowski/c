CFLAGS = -Wall

all : compile link test clean

compile : main.c funkcja.c funkcja.h
	gcc -c main.c funkcja.c

link : main.o funkcja.o
	gcc main.o funkcja.o -o funkcja

test : test1 test2 test3 funkcja
	cat test1
	./funkcja < test1
	cat test2
	./funkcja < test2
	cat test3
	./funkcja < test3

clean :
	rm -f *.o funkcja *~
