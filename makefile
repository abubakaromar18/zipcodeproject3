all: a.exe

test: a.exe
	./a.exe

# this compiles the exe 
a.exe: main.o
	g++ -o a.exe main.o # add each individual .o file for compiling
	make clean_objs

# this compiles a single file
# Make only compiles the files that changed which speeds up compile time
main.o: main.cpp # make a new version of this for each individual .cpp file
	g++ -c main.cpp


# - - - - 
# Cleaning
# - - - -

clean_objs:
	del main.o

clean:
	make clean_objs
	del a.exe
