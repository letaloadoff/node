all: main clsBpInterpreter

%: %.cc
	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@
