lab3: lab3.c lab3Func.o lab3Func.h
	gcc -Wall lab3.c -o lab3.exe lab3Func.o
lab3Func.o : lab3Func.c lab3Func.h
	gcc -Wall lab3Func.c -c
