OBJS	= main.o parts.o
SOURCE	= main.c parts.cc
HEADER	= parts.h
OUT	= calculator
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.c
	$(CC) $(FLAGS) main.c 

parts.o: parts.cc
	$(CC) $(FLAGS) parts.cc 


clean:
	rm -f $(OBJS) $(OUT)