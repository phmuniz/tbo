all: comp run

comp:
	gcc -o exec client.c merge_sort.c

run:
	./exec 100000 < input/unif_rand/100000.txt

val: 
	valgrind ./exec 100000 < input/unif_rand/100000.txt