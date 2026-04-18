CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c11 -g

zap: main.c 
	$(CC) $(CFLAGS) -o zap main.c

clean:
	rm -f zap

.PHONY: clean