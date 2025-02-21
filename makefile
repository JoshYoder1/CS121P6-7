program: Address.o Date.o Student.o main.o
	g++ -g Address.o Date.o Student.o main.o -o program

main.o: Address.h Date.h Student.h main.cpp
	g++ -c -g main.cpp

Student.o: Student.h Student.cpp Date.h Address.h
	g++ -c -g Student.cpp

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
