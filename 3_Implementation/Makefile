# Project: project code
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = project code.o
LINKOBJ  = project code.o
LIBS     = -L"C:/GCC compiler/Dev-Cpp/MinGW64/lib" -L"C:/GCC compiler/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"C:/GCC compiler/Dev-Cpp/MinGW64/include" -I"C:/GCC compiler/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/GCC compiler/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"C:/GCC compiler/Dev-Cpp/MinGW64/include" -I"C:/GCC compiler/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"C:/GCC compiler/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"C:/GCC compiler/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = project code.exe
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

project code.o: project code.c
	$(CC) -c project code.c -o project code.o $(CFLAGS)
