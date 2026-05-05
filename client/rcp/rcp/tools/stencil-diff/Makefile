include ../../common.mk

SOURCES = stencil_diff.cpp
OBJECTS = $(SOURCES:.cpp=.o)

$(STENCIL_DIFF_BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(STENCIL_DIFF_BIN) $(OBJECTS)
