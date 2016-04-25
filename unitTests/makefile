NAME=calculatorTests
OBJFILES=Operations.o Qlabel.o calculatorTests.o Display.o
CC=g++
CFLAGS=-O2 -Wall -pedantic -lm -std=c++11 

calculatorTests: calculatorTests.o Mathf.o
	$(CC) $(CFLAGS) calculatorTests.o Mathf.a -o calculatorTests

Mathf.o: Mathf.cpp Mathf.h
	$(CC) $(CFLAGS) -c Mathf.cpp -o Mathf.o
	ar rvs Mathf.a Mathf.o

calculatorTests.o: calculatorTests.cpp catch.hpp
	$(CC) $(CFLAGS) -c calculatorTests.cpp -o calculatorTests.o

clean:
	rm -f *.o *.a dep.list $(NAME)

pack:
	zip -r xchrip00_xmysza00_xmotyc06_xmacur07.zip ../.

test:
	./$(NAME)
