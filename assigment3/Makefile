
PROJECT = assignment3


IDIR = .
CXX=g++

CXXFLAGS = -I$(IDIR)

ODIR = OBJ

LDIR = ../lib

LIBS = -lm

DEPS =  TransformerRank.h TransformerLeader.h Transformer.h TransformerOfficer.h TransformersArmy.h TransformerWarrior.h

OBJ = main.o Transformer.o TransformerLeader.o TransformerOfficer.o TransformersArmy.o TransformerRank.o TransformerWarrior.o 
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
