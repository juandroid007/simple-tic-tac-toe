### A simple Tic-Tac-Toe for terminal written in C/C++.

To build, run:

	make
	
To build and run, you can execute:

	make run
	
To clean outputs builds files, run:

	make clean
	
To run the build binary, run:
	
	./tttoe

To debug, first build and run:

	make dbg

To debug, run:

	make debug

#### Notes:

* Solved. ~~The game have a bug in the player input. The out lines in terminal are duplicated. I have no idea of the cause.~~


* If you want to build in Windows, you have to 
change every `system("clear");` to 
`system("cls");`.
