CC = gcc
CFLAGS = -g -Wall

random: ./variables/random.c
	
	mkdir -p bin
	$(CC) $(CFLAGS) -o ./bin/random ./variables/random.c

clean:
# 	rm -f ./bin/random
	rm -dr ./bin 