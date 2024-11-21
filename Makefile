
default: run

.PHONY: run

bin/main: src/main.cpp
	g++ -o bin/main src/main.cpp

run: bin/main
	./bin/main

