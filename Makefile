FLAGS=-g -Wall
CC=gcc
INPUT=$(wildcard src/*.c)
OUTPUT=main

all: $(INPUT)
	$(CC) $(FLAGS) $(INPUT) -o $(OUTPUT)

run: all
	./main

valgrind: $(INPUT) all
	valgrind -s --leak-check=full ./$(OUTPUT)
