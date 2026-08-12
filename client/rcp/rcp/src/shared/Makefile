include ../../common.mk

SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(SHARED_LIB)

$(SHARED_LIB): $(OBJECTS)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Header dependencies, from the -MMD -MP in common.mk.
-include $(OBJECTS:.o=.d)

clean:
	rm -f $(OBJECTS) $(OBJECTS:.o=.d) $(SHARED_LIB)
