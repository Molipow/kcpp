.PHONY: all
all: main clean

main: ZadKcpp.o ZadIO.o ZadFunc.o
	g++ -c main.cc -o main.o
	g++ main.o ZadKcpp.o ZadIO.o ZadFunc.o

ZadKcpp.o: 
	g++ -c src/ZadKcpp.cc -o ZadKcpp.o 

ZadIO.o:
	g++ -c src/ZadIO.cc -o ZadIO.o

ZadFunc.o:
	g++ -c src/ZadFunc.cc -o ZadFunc.o

clean:
	rm -f *.o