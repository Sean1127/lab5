main: main.o HUGEINT.o
		g++ -o lab5 main.o HUGEINT.o
main.o: main.cpp HUGEINT.h
		g++ -c main.cpp
HUGEINT.o: HUGEINT.cpp HUGEINT.h
		g++ -c HUGEINT.cpp
clean:
		rm HUGEINT *.o
