all: math.exe
main.o : main.c
	gcc main.c -c -o main.o
add.o : add.c
	gcc add.c -c -o add.o
sub.o : sub.c
	gcc sub.c -c -o sub.o
mul.o : mul.c
	gcc mul.c -c -o mul.o
div.o : div.c
	gcc div.c -c -o div.o
math.exe: main.o add.o sub.o div.o mul.o
	gcc main.o add.o sub.o mul.o div.o -o math.exe
	
clean:
	dev *.o *.exe