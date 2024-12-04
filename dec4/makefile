CXXARGS = -pedantic-errors -Wall -Wconversion
program: cat.o duck.o animal.o main.cpp
	g++ $(CXXARGS) cat.o duck.o animal.o main.cpp -o runme
cat.o: cat.cpp cat.h
	g++ $(CXXARGS) -c cat.cpp
duck.o: duck.cpp duck.h
	g++ $(CXXARGS) -c duck.cpp
animal.o: animal.cpp animal.h
	g++ $(CXXARGS) -c animal.cpp
all: clean program
clean:
	rm -f *.o runme *~
