
.PHONY: run build


out: main.cpp
	g++ -o out main.cpp


build:
	out


run:
	./out

