main:
	g++ main.cpp -o tttoe

run:
	g++ main.cpp -o tttoe
	./tttoe

clean:
	rm ./tttoe

<<<<<<< HEAD
dbg:
=======
debug:
	g++ main.cpp -g -o debug
>>>>>>> 61e6f5813aca45e062d26cd60a53162d2eb6c5fa
	gdb -tui debug
