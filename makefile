CC = gcc
CFLAGS = -g -Wall

random: ./loops/random.c
	
	mkdir -p bin
	$(CC) $(CFLAGS) -o ./bin/random ./loops/random.c

clean:
# 	rm -f ./bin/random
	rm -dr ./bin 