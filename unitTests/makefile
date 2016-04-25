CFLAGS=-O2 -Wall -pedantic -lm -std=c++11 


calculatorTests: calculatorTests.o Mathf.o
	g++ $(CFLAGS) calculatorTests.o Mathf.a -o calculatorTests

Mathf.o: Mathf.cpp Mathf.h
	g++ $(CFLAGS) -c Mathf.cpp -o Mathf.o
	ar rvs Mathf.a Mathf.o

calculatorTests.o: calculatorTests.cpp catch.hpp
	g++ $(CFLAGS) -c calculatorTests.cpp -o calculatorTests.o



clean:
	rm -f *.o calculatorTests *.a
