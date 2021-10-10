all: list.o noeud.o
	g++ list.o noeud.o list_prog.cpp -o list_prog
list.o: list.cpp
	g++ -c list.cpp
noeud.o: noeud.cpp
	g++ -c noeud.cpp
clean:
	rm *.o
redo: clean all
	
