all: pokemon.o squirtle.o pikachu.o charmander.o main

clean:
		rm *.o *.exe

main: pokemon.o squirtle.o pikachu.o charmander.o
		g++ pokemon.o squirtle.o pikachu.o charmander.o main.cpp -o main

pokemon.o:
		g++ -c pokemon.cpp

squirtle.o:
		g++ -c basic/squirtle.cpp
pikachu.o:
		g++ -c basic/pikachu.cpp
charmander.o:
		g++ -c basic/charmander.cpp
