all:test

CC=gcc -std=c99
FLAG= -g -Wall -O0
SRC=./src

test: src/test.c src/misc.o src/queue.o
	${CC} ${FLAG} -o test ./src/test.c ./src/queue.o ./src/misc.o 

queue.o:${SRC}/queue.c
	${CC} ${FLAG} $< $@

misc.o:${SRC}/misc.c
	${CC} ${FLAG} $< $@

.PYHON:
clean:
	rm -f ${SRC}/*.o
	rm -f ./test

