CFLAGS=-Wall -Werror -Wfatal-errors

main: main.o game.o piece.o
	g++ -o main main.o game.o piece.o

main.o: main.cpp game.h piece.h
	g++ -c $(CFLAGS) main.cpp

game.o: game.cpp game.h
	g++ -c $(CFLAGS) game.cpp

piece.o: piece.cpp piece.h 
	g++ -c $(CFLAGS) piece.cpp

pawn.o: pawn.cpp pawn.h piece.h
	g++ -c $(CFLAGS) pawn.cpp

rook.o: rook.cpp rook.h piece.h
	g++ -c $(CFLAGS) rook.cpp

knight.o: knight.cpp knight.h piece.h
	g++ -c $(CFLAGS) knight.cpp

bishop.o: bishop.cpp bishop.h piece.h
	g++ -c $(CFLAGS) bishop.cpp	

king.o: king.cpp king.h piece.h
	g++ -c $(CFLAGS) king.cpp

queen.o: queen.cpp queen.h piece.h
	g++ -c $(CFLAGS) queen.cpp

clean:
	rm -rf *.o main