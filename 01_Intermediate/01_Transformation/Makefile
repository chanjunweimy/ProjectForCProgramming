all: Transformation.out
Transformation.out: Transformation.o Matrix.o
		g++ -Wall -g -o Transformation.out Transformation.o Matrix.o
Transformation.o: Transformation.cpp
		g++ -c -Wall -g Transformation.cpp
Matrix.o: Matrix.cpp
		g++ -c -Wall -g Matrix.cpp
