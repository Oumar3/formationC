execute:main.o fonction.o
gcc -o main1 mesfon.o  main1.o

mesfon.o: fonction.c
gcc -o fonction.o -c fonction.c

main1.o: main.c fonction.h
gcc -o main1.o -c main.c
