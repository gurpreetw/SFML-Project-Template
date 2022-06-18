all:
	g++ -c src/main.cpp -Isrc/include
	g++ main.o -o bin/sf-game -Lsrc/lib -lsfml-graphics -lsfml-window -lsfml-system

run:
	./bin/sf-game.exe
