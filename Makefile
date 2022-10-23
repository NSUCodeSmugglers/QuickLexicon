all: main
	@echo Compilation Done
	@echo now execute the command "Main"

main: main.o Tree.o
	@g++ -o Main.exe main.o tree.o
	@echo Linking all and Maiking main.exe

main.o : main.cpp Tree.o
	@g++ -c main.cpp
	@echo main.cpp Compiling

Tree.o: Tree.cpp
	@g++ -c Tree.cpp Tree.h TreeNode.h Sortedlist.h
	@echo Tree.cpp Compiling

clean: 
	@del  Main.exe Main.o Tree.o Tree.h.gch Sortedlist.h.gch TreeNode.h.gch
	@echo Clean Done