all: dynamicProgram1 dynamicProgram2 runtimeLoader

dynamicProgram1: dynamicProgram.o libsamplelibrary.so.1.0.2
	cc -o dynamicProgram1 dynamicProgram.o -L./ -l:libsamplelibrary.so.1

dynamicProgram2: dynamicProgram.o libsamplelibrary.so.2.1.0
	cc -o dynamicProgram2 dynamicProgram.o -L./ -l:libsamplelibrary.so.2

runtimeLoader: runtimeLoader.o libsamplelibrary.so.1.0.2 libsamplelibrary.so.2.1.0
	cc -o runtimeLoader runtimeLoader.o -ldl

libsamplelibrary.so.1.0.2: file1.o file2.o file3.o file4.o file5.o version1.o
	cc --shared -o libsamplelibrary.so.1.0.2 file1.o file2.o file3.o file4.o file5.o version1.o
	ln -sf libsamplelibrary.so.1.0.2 libsamplelibrary.so.1.0
	ln -sf libsamplelibrary.so.1.0.2 libsamplelibrary.so.1

libsamplelibrary.so.2.1.0: file1.o file2.o file3.o file4.o file5.o version2.o
	cc --shared -o libsamplelibrary.so.2.1.0 file1.o file2.o file3.o file4.o file5.o version2.o
	ln -sf libsamplelibrary.so.2.1.0 libsamplelibrary.so.2.1
	ln -sf libsamplelibrary.so.2.1.0 libsamplelibrary.so.2
	ln -sf libsamplelibrary.so.2.1.0 libsamplelibrary.so

clean:
	rm -f *.o *.so dynamicProgram1 dynamicProgram2 runtimeLoader


