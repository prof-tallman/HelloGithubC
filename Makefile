
all: test.c
	gcc -Wall -Wextra -pedantic -std=c99 test.c -o test.exe

.PHONY: clean
clean:
	rm test.exe
