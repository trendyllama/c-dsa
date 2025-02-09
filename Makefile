
default: run

.PHONY: run

bin/main: src/main.cpp
	mkdir -p bin/
	g++ -o bin/main src/main.cpp

run: bin/main
	./bin/main

