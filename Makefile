
default: run

.PHONY: run


run: main.cpp
	g++ -o out  -l ll.o main.cpp

	./out
