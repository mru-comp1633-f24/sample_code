CXXARGS = -pedantic-errors -Wall -Wconversion
program: mylib.o main.o
	g++ $(CXXARGS) main.o mylib.o -o runme
main.o: main.cpp
	g++ $(CXXARGS) -c main.cpp
mylib.o: mylib.cpp mylib.h
	g++ $(CXXARGS) -c mylib.cpp
all: clean program
clean:
	rm -f *.o runme *~
