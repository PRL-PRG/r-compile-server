SUBDIRS = $(shell bash list-tests.sh)

.PHONY: all test clean $(SUBDIRS)

all: test

test: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@ test

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir clean; \
	done
