all: dynamicProgram runtimeLoader

dynamicProgram: dynamicProgram.o libsamplelibrary.so
	cc -o dynamicProgram dynamicProgram.o -L./ -l:libsamplelibrary.so

runtimeLoader: runtimeLoader.o libsamplelibrary.so
	cc -o runtimeLoader runtimeLoader.o -ldl

libsamplelibrary.so: file1.o file2.o file3.o file4.o file5.o
	cc --shared -o libsamplelibrary.so file1.o file2.o file3.o file4.o file5.o

clean:
	rm -f *.o *.so dynamicProgram

