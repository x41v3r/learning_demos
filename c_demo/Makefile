all: types_operators_and_expressions control_flow

types_operators_and_expressions: types_operators_and_expressions.o
	gcc -o ./bin/types_operators_and_expressions types_operators_and_expressions.o

control_flow: control_flow.o
	gcc -o ./bin/control_flow control_flow.o

types_operators_and_expressions.o: types_operators_and_expressions.c
	gcc -c types_operators_and_expressions.c

control_flow.o: control_flow.c
	gcc -c control_flow.c

clean:
	rm -rf ./types_operators_and_expressions.o
	rm -rf ./control_flow.o

