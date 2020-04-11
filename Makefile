PRGRM = nthPrime
CMPLR = g++
FLEXT = cpp
FLAGS = -Wall -std=c++11

$(PRGRM): $(PRGRM).o
	$(CMPLR) $(FLAGS) -o $(PRGRM) $(PRGRM).o

$(PRGRM).o: $(PRGRM).$(FLEXT)
	$(CMPLR) $(FLAGS) -c $(PRGRM).$(FLEXT)

clean:
	-rm *.o $(PRGRM)