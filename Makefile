all: ccompile

CSOURCES = $(shell find . -name '*.c')
CXXSOURCES = $(shell find . -name '*.cpp')
BUILDIR = build

CC = clang
CXX = g++
CFLAGS = -Wall -I -coverage -O0
CXXFLAGS = -Wall
LDFLAGS = -l

COBJECTS = $(foreach x, $(basename $(CSOURCES)), $(x).o)
CXXOBJECTS = $(foreach x, $(basename $(CXXSOURCES)), $(x).o)

ccompile: $(COBJECTS)
			$(CC) $(CFLAGS)	-c $(LDFLAGS) $^ -o $@
cxxcompile: $(CXXOBJECTS)
			$(CXX) $(CXXFLAGS) -c $(LDFLAGS) $^ -o $@

clean:
			rm -rf $(BUILDDIR) $(COBJECTS)
					rm -rf $(BUILDIR) $(CXXOBJECTS)
