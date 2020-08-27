all: dynamicProgram

dynamicProgram: dynamicProgram.o libsamplelibrary.so

libsamplelibrary.so: file1.o file2.o file3.o file4.o file5.o
	cc --shared -o libsamplelibrary.so file1.o file2.o file3.o file4.o file5.o

clean:
	rm -f *.o *.so dynamicProgram

