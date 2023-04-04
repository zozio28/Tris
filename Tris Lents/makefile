exe: fonctions.o trisLents.o main.o
	gcc fonctions.o trisLents.o main.o -o exe
fonctions.o: fonctions.c fonctions.h
	gcc -c -Wall fonctions.c  -o fonctions.o
trisLents.o: trisLents.c trisLents.h
	gcc -c -Wall trisLents.c -o trisLents.o
main.o: main.c fonctions.h
	gcc -c -Wall main.c -o main.o
clean:
	rm -f *.o
