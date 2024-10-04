
PROJECT = FirstTask


IDIR = .
CXX=g++

CXXFLAGS = -I$(IDIR)

ODIR = OBJ

LDIR = ../lib

LIBS = -lm

DEPS = HelloFunc.h

OBJ = Main.o HelloFunc.o

.PHONY: default
default: all

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)


all: $(PROJECT)

.PHONY: clean
clean:
	rm -f *.o *~ core

cleanall: clean
	rm -f $(PROJECT)
