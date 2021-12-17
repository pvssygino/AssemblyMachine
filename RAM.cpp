#include "RAM.h"
#include <iostream>
#pragma warning (disable:4996)
ram create_ram() {
	ram r = (ram)malloc(sizeof(struct nodo));
	if (r != NULL)
		r->top;
	else
		printf("error RAM! ");
	return r;
}
bool push(ram r, char* address) {

	bool pushed = false;

	Node n = (struct nodo*)malloc(sizeof(struct nodo));
	if (n != NULL) {
		strcpy(n->address_BIN, address);
		n->next = r->top;
		r->top = n;
		pushed = true;
	}
	else
		pushed = false;

	return pushed;

}
int pop(ram r) {
	int data = INT_MIN;
	return data;
}