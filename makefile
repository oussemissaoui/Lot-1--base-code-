prog:main.o menu.o
	gcc main.o menu.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf -g
	rm -f *.o
main.o:main.c
	gcc -c main.c -g
menu.o:menu.c
	gcc -c menu.c -g

