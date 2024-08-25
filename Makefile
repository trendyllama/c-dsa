
default: run clean

.PHONY: run


out.o: main.cpp
	g++ -o out.o main.cpp


run: out.o
	./out.o


clean:
	rm out.o

