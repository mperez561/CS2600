CC=gcc
CFLAGS=-L. -lmath

all: mathProgram

mathFuncMain.o: mathFuncMain.c
	$(CC) -c mathFuncMain.c -o mathFuncMain.o

mathFunc.o: mathFunc.c	
	$(CC) -c mathFunc.c
	
libMath.a: mathFunc.o
	ar -rc libMath.a mathFunc.o

mathProgram: libMath.a
	$(CC) $(CFLAGS) -c mathFuncMain.c -o mathProgram

clean:
	rm mathProgram *.o *.a