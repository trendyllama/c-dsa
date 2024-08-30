
default: run clean

.PHONY: run


out.o: main.cpp
	g++ main.cpp src/linkedList.cpp -o out.o


run: out.o
	./out.o


clean:
	rm out.o
