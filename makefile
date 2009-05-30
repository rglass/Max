CC= gcc

PREFIX=../..

CFLAGS   = -g -Wall -std=c99

OUTFILE=max
OBJS   =Item.o max.o

$(OUTFILE) : $(OBJS)
	$(CC)		$(OBJS)		-o	$@

Item.o: Item.c Item.h
max.o: max.c
	$(CC) -c	 $(CFLAGS) $< -o $@

clean :
	rm -f  $(OUTFILE) $(OBJS)
