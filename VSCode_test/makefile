objects := main.o
cc := gcc
test.exe : $(objects)
	$(cc) -o test.exe $(objects)
main.o: main.c
	$(cc) -c main/src/main.c
.PHONY:clean
clean:
	del main.o test.exe