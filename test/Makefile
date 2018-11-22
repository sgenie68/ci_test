GCC=g++
CFLAGS=-I..
LFLAGS=-L. -llibrary


all: test

test: tester.cpp
	cp ../lib/liblibrary.so .
	$(GCC) tester.cpp -o tester $(CFLAGS) $(LFLAGS)



clean:
	rm -rf *~ *.o tester *.so

