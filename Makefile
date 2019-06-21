output: main.o allocators.o
	g++ main.cpp allocators.cpp -o output

main.o: main.cpp
	g++ -c main.cpp

allocators.o: allocators.cpp allocators.h
	g++ -c allocators.cpp

clean:
	rm *.o output
