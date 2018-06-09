test: main.o tree.o
	g++ main.o tree.o -o test
main.o: main.cpp tree.h
	g++ -c main.cpp
tree.o: tree.cpp tree.h
	g++ -c tree.cpp

