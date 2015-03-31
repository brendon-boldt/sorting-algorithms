CC=gcc
CFLAGS=-c -std=c99
LDFLAGS=-std=c99
EXECUTABLE=c-sort
SOURCES=$(wildcard ../*sort/*.c)
MAIN=sort.c
LIB=array.c
LIB_OBJ=$(LIB:.c=.o)
HEADERS=$(wildcard *.h)
OBJECTS=$(SOURCES:.c=.o)


all: $(HEADERS) $(LIB) $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(LIB_OBJ) $(OBJECTS) $(HEADERS)
	$(CC) $(LDFLAGS) $(MAIN) $(OBJECTS) $(LIB_OBJ) -o ../bin/$@

$(LIB_OBJ): $(LIB)
	$(CC) $(CFLAGS) $(LIB) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o ../*/*.o 
