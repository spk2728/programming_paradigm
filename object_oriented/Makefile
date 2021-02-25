all: pokemon.o squirtle.o pikachu.o charmander.o main

clean:
		rm *.o *.exe

main: pokemon.o squirtle.o pikachu.o charmander.o
		g++ pokemon.o squirtle.o pikachu.o charmander.o main.cpp -o main

pokemon.o:
		g++ -c pokemons/pokemon.cpp
squirtle.o:
		g++ -c pokemons/squirtle.cpp
pikachu.o:
		g++ -c pokemons/pikachu.cpp
charmander.o:
		g++ -c pokemons/charmander.cpp
