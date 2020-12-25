executable: fonction.o min.o
	gcc -o executable fonction.o min.o

fonction.o: mesfonction.c
	gcc -o fonction.o -c mesfonction.c

min.o: main.c mesfonction.h 
	gcc -o min.o -c main.c