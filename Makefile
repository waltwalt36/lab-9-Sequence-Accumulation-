CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: main

main: main.cpp accum.h
	$(CXX) $(CXXFLAGS) -o main.out main.cpp

clean:
	rm -f main *.o

.PHONY: all clean