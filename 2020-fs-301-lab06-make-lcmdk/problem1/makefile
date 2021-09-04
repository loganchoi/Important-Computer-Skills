triangles: main.o TrianglePrinter.o funcs.o
	g++ main.o TrianglePrinter.o funcs.o -o triangles

main.o: main.cpp
	g++ -c main.cpp

TrianglePrinter.o: TrianglePrinter.cpp TrianglePrinter.h
	g++ -c TrianglePrinter.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

.PHONY: clean

clean:
	-@rm -f triangles
	-@rm -f *.o
