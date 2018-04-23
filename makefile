PROG = Programa

#Compilador
CC=g++

RM = rm -f core

CPPFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

#Variaveis para os subdiretorios
INC_DIR = ./include
SRC_DIR = ./src
OBJ_DIR = ./build
BIN_DIR = ./bin

OBJ = ./build/main.o ./build/plano.o ./build/espaco.o ./build/run.o

$(PROG) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$@ $^
$(OBJ_DIR)/main.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/main.cpp -o $@

$(OBJ_DIR)/plano.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/plano.cpp -o $@
	 
$(OBJ_DIR)/espaco.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/espaco.cpp -o $@

$(OBJ_DIR)/run.o:
	$(CC) -c $(CPPFLAGS) $(SRC_DIR)/run.cpp -o $@

clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
