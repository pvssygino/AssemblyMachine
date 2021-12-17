#ifndef RAM_H
#define RAM_H

#include <stdio.h>

struct nodo {
	char address_BIN[15];
	struct nodo* next;
};
typedef nodo* Node;
struct RAM_ {
	Node top;
};
typedef RAM_ *ram;

ram create_ram();
bool push(ram ram_, char* address);

void printfRAM(ram ram_);
int pop(ram ram_);
#endif