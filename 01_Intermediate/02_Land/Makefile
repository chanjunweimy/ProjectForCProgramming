all: Land.out
Land.out: Land.o
	g++ -Wall -g -o Land.out Land.o
Land.o: Land.cpp
	g++ -c -Wall -g Land.cpp
clean: 
	rm -f Land.out Land.o