all: sample_program

sample_program: sample.o library.so
	gcc -L./ -o sample_program sample.o -lrary


library.so: library.o
	gcc --shared -o library.so library.o
	
library.o: library.c
	gcc -fpic -c library.c
