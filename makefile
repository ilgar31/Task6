all: program.exe

root.o: root.c main.h
	gcc -m32 -std=c99 -c -o root.o root.c

integral.o: integral.c main.h
	gcc -m32 -std=c99 -c -o integral.o integral.c

test.o: test.c main.h
	gcc -m32 -std=c99 -c -o test.o test.c

program.exe: root.o integral.o test.o
	gcc -m32 -o program.exe root.o integral.o test.o

clean:
	rm -f *.o *.exe
