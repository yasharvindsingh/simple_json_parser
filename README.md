Simple JSON parser in C/C++	

file.json: a sample json file.

json_parser.cpp : a cpp program to parse the file file.json, the program works by passing the name of the file and the key to a function print_value_from_json via a call from the function main.

Makefile: for building the program.

install.sh: a shell script to install the required library.

job-assignment.pdf: description and instructions for the assignment. 

To run the program for sample file:

1) open terminal
2) make 
3) ./json_parser

if you encounter an error: (maybe the library used is not installed)
Go for the command 
make install

if even this does not work then run the command:
./install.sh  or  bash install.sh (for bash)
 
 
references:

1) https://en.wikibooks.org/wiki/JsonCpp

