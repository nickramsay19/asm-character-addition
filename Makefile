all: main

main: build/main.o build/asm.o
	 g++ -o main build/main.o build/asm.o

build/main.o: src/main.c
	 gcc -o build/main.o -c src/main.c

build/asm.o: src/asm.s
	gcc -o build/asm.o -c src/asm.s

clean:
	 rm main build/*