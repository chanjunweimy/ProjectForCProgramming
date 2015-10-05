SOURCES = $(shell find . -name '*.c')
BUILDIR = build

CC = gcc
CFLAGS = -I
LDFLAGS = -l

OBJECTS = $(foreach x, $(basename $(SOURCES)), $(x).o)

$(BUILDIR): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@

clean:
	rm -r $(TARGET) $(OBJECTS)
