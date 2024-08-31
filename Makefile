
default: run

.PHONY: run


run: main.cpp src/linkedList.cpp

	g++ -o out main.cpp src/linkedList.cpp

	./out
