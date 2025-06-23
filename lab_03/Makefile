all: comp run

comp:
	gcc -o exec client.c bubble_sort.c

run:
	./exec 1000 < in/unif_rand/1Kunif_rand.txt

val: 
	valgrind ./exec 1000 < in/unif_rand/1Kunif_rand.txt