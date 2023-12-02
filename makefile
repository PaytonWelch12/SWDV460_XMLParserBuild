all: parser.exe

parser.exe: parser.o
	g++ -o parser.exe parser.o -lxerces-c

parser.o: parser.cpp
	g++ -c -o parser.o parser.cpp -lxerces-c

clean:
	rm parser.o parser.exe
