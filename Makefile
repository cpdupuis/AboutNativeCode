all: sample_program

sample_program: sample.o
	cc -o sample_program sample.o

