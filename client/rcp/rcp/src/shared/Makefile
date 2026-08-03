include ../../common.mk

SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(SHARED_LIB)

$(SHARED_LIB): $(OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(SHARED_LIB)
