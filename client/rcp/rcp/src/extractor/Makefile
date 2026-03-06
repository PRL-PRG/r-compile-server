include ../../common.mk

SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

EXT_LIBS = -lbfd

$(EXTRACTOR_BIN): $(OBJECTS) $(SHARED_LIB)
	$(CXX) $(CXXFLAGS) -o $(EXTRACTOR_BIN) $(OBJECTS) $(SHARED_LIB) $(EXT_LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(SHARED_LIB):
	$(MAKE) -C $(SHARED_LIB_DIR)

.PHONY: clean
clean:
	rm -f $(EXTRACTOR_BIN) $(OBJECTS)
