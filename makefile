program: Address.o main.o
	g++ -g Address.o main.o -o program

main.o: Address.h Date.h main.cpp
	g++ -c -g main.cpp

Date.o: Date.h Date.cpp
	g++ -c -g Date.cpp

Address.o: Address.h Address.cpp
	g++ -c -g Address.cpp

clean:
	rm *.o
	rm program

run: program
	./program

debug: program
	gdb program
