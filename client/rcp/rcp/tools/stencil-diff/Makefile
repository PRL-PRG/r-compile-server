include ../../common.mk

SOURCES = stencil_diff.cpp
OBJECTS = $(SOURCES:.cpp=.o)

$(STENCIL_DIFF_BIN): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Header dependencies, from the -MMD -MP in common.mk.
-include $(OBJECTS:.o=.d)

.PHONY: clean
clean:
	rm -f $(STENCIL_DIFF_BIN) $(OBJECTS) $(OBJECTS:.o=.d)
