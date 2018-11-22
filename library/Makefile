GCC=g++
#CFLAGS=-fpic
#LFLAGS=-shared
CFLAGS=
LFLAGS=-dynamiclib


all: library

library: library.cpp
	$(GCC) $(CFLAGS) $(LFLAGS) library.cpp -o liblibrary.so

install: liblibrary.so
	mkdir -p ../lib
	mkdir -p ../include
	mv liblibrary.so ../lib
	cp library.h ../include

clean:
	rm -rf *~ *.o *.so

