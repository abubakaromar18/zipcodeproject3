#	THIS IS ALL BAD AND DOESN'T WORK
#	WASTE OF TIME!
#
#
#
#


all: a.exe

basic:
	g++ -o a.exe main.cpp buffer.cpp sorting.cpp


test: a.exe
	./a.exe

# this compiles the exe 
a.exe: main.o buffer.o sorting.o
	g++ -o a.exe main.o buffer.o sorting.o

# this compiles a single file
# Make only compiles the files that changed which speeds up compile time
main.o: main.cpp # make a new version of this for each individual .cpp file
	g++ -c main.cpp

buffer.o: buffer.cpp buffer.h
	g++ -c buffer.cpp

sorting.o: sorting.cpp sorting.h
	g++ -c sorting.cpp

# - - - - 
# Cleaning
# - - - -

clean_objs:
	del main.o
	del buffer.o
	del sorting.o

clean:
	make clean_objs
	del a.exe
