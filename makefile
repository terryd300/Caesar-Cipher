a.out:		main.o caesar.o
		gcc -o a.out main.o caesar.o

main.o:		main.c caesar.h
		gcc -c main.c

caesar.o:	caesar.c caesar.h
		gcc -c caesar.c

clean:
		rm *.o
		rm a.out
