# This project shows a simple C program,with a Makefile
# The Makefile is a series of targets that may have dependencies
# and rules for creating the target given the dependency. make
# also has default rules for dealing with common cases, like
# converting a ".c" file into a ".o" file using the compiler.

all: helloWorld helloWorld.s

helloWorld: helloWorld.o
	cc -o helloWorld helloWorld.o

helloWorld.o: helloWorld.s
	cc -c helloWorld.s

helloWorld.s: helloWorld.c
	cc -S helloWorld.c
	
clean:
	rm -f *.o *.s helloWorld

