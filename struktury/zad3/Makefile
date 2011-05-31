CFLAGS= -Wall -ansi

testowy: main.o lib.o
	gcc -o testowy main.o lib.o

main.o: main.c lib.h struct.h

lib.o: lib.c struct.h

clean:
	rm -f *.o testowy *~
test:
	echo "1 0 0 3 -1 2 -1 ">1.in
	./testowy <1.in
	echo "1 0 0 3 -1 1 5" >2.in
	./testowy <2.in
	rm -rf *.in