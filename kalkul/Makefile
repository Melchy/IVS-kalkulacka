CFLAGS=-O2 -Wall -pedantic -lm -std=c++11 

GUI.o: Operations.o GUI.cpp GUI.h Mathf.o
	g++ $(CFLAGS) -c GUI.cpp -o GUI.o

Mathf.o: Mathf.cpp Mathf.h
	g++ $(CFLAGS) -c Mathf.cpp -o Mathf.o
	ar rvs Mathf.a Mathf.o

Operations.o: Operations.cpp Operations.h Qlabel.h
	g++ $(CFLAGS) -c Operations.cpp -o Operations.o

Qlabel.o: Qlabel.cpp Qlabel.h
	g++ $(CFLAGS) -c Qlabel.cpp -o Qlabel.o

clean:
	rm -f *.o *.a
