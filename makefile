#Makefile for Highly Composite Number Finder
#Griffin Dube
#August 2020

CPP_STD=--std=c++11
SRC=src/main.cc src/factorization/factorize.cc src/composite/composite.cc
FLAGS=


main: $(SRC)
	g++ $(CPP_STD) $(FLAGS) $(SRC) -o hcn

clean:
	rm -f hcn
