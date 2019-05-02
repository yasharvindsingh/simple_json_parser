json_parser:json_parser.o
	g++ json_parser.o -o json_parser -ljsoncpp
	
json_parser.o:json_parser.cpp
	g++ -c json_parser.cpp 
	
install:
	sudo apt-get install libjsoncpp-dev
	
clean:
	rm json_parser
	rm *.o
