output: main.o matmult.o
	gcc main.o matmult.o -o matmult

main.o: main.c
	gcc -c main.c

matmult.o: matmult.c
	gcc -c matmult.c

clean:
	rm *.o