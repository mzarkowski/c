CFLAGS = -Wall

liniowa : main.o funkcja.o
	gcc main.o funkcja.o -o liniowa

all: test clean

main.o : main.c funkcja.h

funkcja.o : funkcja.c funkcja.h

test: test1 test2 test3 liniowa
	cat test1
	./liniowa < test1
	cat test2
	./liniowa < test2
	cat test3
	./liniowa < test3

clean:
	rm -f *.o liniowa *~
