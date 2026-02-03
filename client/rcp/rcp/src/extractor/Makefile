include ../../common.mk

ifneq ($(GDB_JIT_SUPPORT),0)
  CXXFLAGS += -DGDB_JIT_SUPPORT
endif

SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

CXXFLAGS += -std=c++20
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
