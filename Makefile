main:
	g++ main.cpp -o tttoe

run:
	g++ main.cpp -o tttoe
	./tttoe

clean:
	rm ./tttoe

debug:
	g++ main.cpp -g -o debug
	gdb -tui debug
