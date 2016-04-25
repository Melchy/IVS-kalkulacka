NAME=calculatorTests
OBJFILES=Operations.o Qlabel.o calculatorTests.o Display.o
CC=g++
CFLAGS=-O2 -Wall -pedantic -lm -std=c++11 

%.o: %.c
	$(CC) $(CFLAGS) -c $<

all:dep $(NAME)

dep:
	$(CC) -MM *.cpp >dep.list 

-include dep.list

Mathf.o: Mathf.cpp Mathf.h
	g++ $(CFLAGS) -c Mathf.cpp -o Mathf.o
	ar rvs Mathf.a Mathf.o 

$(NAME): $(OBJFILES) Mathf.o
	$(CC) $(CFLAGS) $(OBJFILES) -o $@ 

clean:
	rm -f *.o *.a dep.list $(NAME)

pack:
	zip -r xchrip00_xmysza00_xmotyc06_xmacur07.zip ../.

test:
	./$(NAME)
