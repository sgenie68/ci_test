GCC=g++
CFLAGS=-I..
LFLAGS=-L. -llibrary -ldeplib


all: test

test: tester.cpp
	rm -rf ci_test_dep
	git clone https://github.com/sgenie68/ci_test_dep.git
	make -C ci_test_dep
	cp ci_test_dep/include/deplib.h ../include
	cp ci_test_dep/lib/libdep* .
	cp ../lib/liblibrary.so .
	$(GCC) tester.cpp -o tester $(CFLAGS) $(LFLAGS)

run_test: tester run.sh
	bash ./run.sh

clean:
	rm -rf *~ *.o tester *.so ci_test_dep

