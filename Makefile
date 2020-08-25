all: sample_program library.so library.so.2 dynamic_program

sample_program: sample.o library.so
	gcc -L./ -o sample_program sample.o -lrary

dynamic_program: dynamic_program.o library.so.1 library.so.2
	gcc -o dynamic_program dynamic_program.o

library.so: library.so.1
	ln -sf library.so.1 library.so

library.so.1: library.so.1.0
	ln -sf library.so.1.0 library.so.1

library.so.2: library.so.2.0
	ln -sf library.so.2.0 library.so.2

library.so.1.0: library.o
	gcc --shared -o library.so.1.0 library.o

library.so.2.0: library_new.o
	gcc --shared -o library.so.2.0 library_new.o
	
clean:
	rm -f *.o *.so* sample_program
