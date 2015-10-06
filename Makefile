all: cxxcompile ccompile

CSOURCES = $(shell find . -name '*.c')
CXXSOURCES = $(shell find . -name '*.cpp')
BUILDIR = build

CC = clang
CXX = g++
CFLAGS = -Wall -I
CXXFLAGS = -Wall
LDFLAGS = -l
COVFLAGS = -coverage 

COBJECTS = $(foreach x, $(basename $(CSOURCES)), $(x).o)
CXXOBJECTS = $(foreach x, $(basename $(CXXSOURCES)), $(x).o)

ccompile: $(COBJECTS)
		$(CC) $(CFLAGS) $(LDFLAGS) $(COVFLAGS) -c $^ -o $@
cxxcompile: $(CXXOBJECTS)
		$(CXX) $(CXXFLAGS) -c $(LDFLAGS) $(COVFLAGS) $^ -o $@

clean:
		rm -rf $(BUILDDIR) $(COBJECTS)
		rm -rf $(BUILDIR) $(CXXOBJECTS)
