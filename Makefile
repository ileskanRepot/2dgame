CC=gcc
CFLAGS=
FILES=$(wildcard *.c)
NAME=main

make: $(FILES)
	$(CC) $(CFLAGS) $^ -o $(NAME) 

run: make
	./$(NAME)
