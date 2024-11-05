all: 01_booleans 02_characters

01_booleans: 01_booleans.o
	g++ -o ./bin/01_booleans 01_booleans.o

01_booleans.o: 01_booleans.cpp
	g++ -c 01_booleans.cpp

02_characters: 02_characters.o
	g++ -o ./bin/02_characters 02_characters.o

02_characters.o: 02_characters.cpp
	g++ -c 02_characters.cpp

clean:
	rm -rf ./01_booleans.o
	rm -rf ./02_characters.o
