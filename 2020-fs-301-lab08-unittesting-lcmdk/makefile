.PHONY: default coverage test cleancoverage clean
CFLAGS=-std=c++11

# make the program

default: main

main: main.o
	g++ ${CFLAGS} main.o -o main

main.o: list.h list.hpp main.cpp
	g++ ${CFLAGS} -c main.cpp


#Unit Testing

coverage: test
	gcov -mr test_list.cpp

test: CFLAGS=--coverage
test: testsuite
	@./testsuite

testsuite: test_main.o test_list.o
	g++ ${CFLAGS} $^ -o testsuite

test_list.o: test_list.cpp list.h list.hpp
	g++ ${CFLAGS} -c test_list.cpp

test_main.o: test_main.cpp
	g++ -O3 -c test_main.cpp

cleancoverage:
	-@rm -f *.gcov *.gcno *.gcda

clean: cleancoverage
	-@rm -f *.o
	-@rm -f testsuite
	-@rm -f program
