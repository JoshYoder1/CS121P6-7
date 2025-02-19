program: Address.o main.o
	g++ -g Address.o main.o -o program

main.o: Address.h main.cpp
	g++ -c -g main.cpp

Address.o: Address.h Address.cpp
	g++ -c -g Address.cpp

clean:
	rm *.o
	rm program

run: program
	./program

debug: program
	gdb program
