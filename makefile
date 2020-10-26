all: arrays.c
	gcc -o prgrm arrays.c

run: prgrm
	./prgrm
