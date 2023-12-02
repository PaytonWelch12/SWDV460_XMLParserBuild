all: parser.exe

parser.exe: parser.o
    g++ -o parser.exe parser.o 

parser.o: parser.cpp
    g++ -c -o parser.o parser.cpp 

clean:
    rm parser.o parser.exe
