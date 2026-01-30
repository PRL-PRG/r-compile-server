include ../../common.mk

ifneq ($(GDB_JIT_SUPPORT),0)
  CXXFLAGS += -DGDB_JIT_SUPPORT
endif

SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

CXXFLAGS += -std=c++20
EXT_LIBS = -lbfd

$(EXTRACTOR_BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(EXTRACTOR_BIN) $(OBJECTS) $(EXT_LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(EXTRACTOR_BIN) $(OBJECTS)
