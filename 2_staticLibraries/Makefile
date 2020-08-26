# What do you do if you have a lot of object files? Put them into a library.

all: staticProgram

staticProgram: staticProgram.o libsamplelibrary.a
	cc -o staticProgram staticProgram.o -L./ -lsamplelibrary 

libsamplelibrary.a: file1.o file2.o file3.o file4.o file5.o
	ar rs libsamplelibrary.a file1.o file2.o file3.o file4.o file5.o

clean:
	rm -f *.o *.a staticProgram

