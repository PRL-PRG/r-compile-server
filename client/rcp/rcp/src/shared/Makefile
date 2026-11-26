include ../../common.mk

# libshared.a is linked into rcp.so, so it has to be position-independent. Compilers that don't
# default to PIE (upstream GCC, unlike Ubuntu's) otherwise emit relocations a shared object can't have.
CFLAGS += -fPIC

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
