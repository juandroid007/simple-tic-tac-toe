main:
	g++ main.cpp -o tttoe

run:
	g++ main.cpp -o tttoe
	./tttoe

clean:
	rm ./tttoe

dbg:
	gdb -tui debug
