all: pokemon.o main

clean:
		rm *.o *.exe

main: pokemon.o
		g++ pokemon.o main.cpp -o main

pokemon.o:
		g++ -c pokemon.cpp
