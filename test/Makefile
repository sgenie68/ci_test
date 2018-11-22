GCC=g++
CFLAGS=-I..
LFLAGS=-L. -llibrary


all: test

test: tester.cpp
	cp ../lib/liblibrary.so .
	$(GCC) tester.cpp -o tester $(CFLAGS) $(LFLAGS)

run_test: tester run.sh
	bash ./run.sh

clean:
	rm -rf *~ *.o tester *.so

