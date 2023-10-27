CC=gcc
CFLAGS=-L. -lmathFuncDLL
DLLFLAGS=-fPIC --shared

ifeq ($(OS),Windows_NT)
	DELETE=del
else
	DELETE=rm
	ifeq ($(UNAME_$),Darwin)
		CFLAGS += -D OSX
	else DELETE=rm
	endif
endif

all: mathProgram

mathFuncMain.o: mathFuncMain.c
	$(CC) -c mathFuncMain.c -o mathFuncMain.o

mathFunc.o: mathFunc.c	
	$(CC) -c mathFunc.c

mathFuncDLL.dll: mathFunc.c
	$(CC) $(CFLAGS) -o mathFuncDLL.dll mathFunc.c

mathProgram: mathFuncDLL.dll
	$(CC) $(CFLAGS) -c mathFuncMain.c -o mathProgram

clean:
	DELETE mathProgram *.o *.a