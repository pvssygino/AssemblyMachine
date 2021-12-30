#include "CPU.h"
#include <string.h>
#include <iostream>
cpu new_() {

	cpu c = (cpu)malloc(sizeof(cpu));
	if (c) {
		c->f = zero_set();
		c->IR = initialize();
		c->PC = initialize();
		c->STACK = initialize();;

		for (int i = 0; i < R_NUM; i++) {
			c->r[i].value = 0;
		}
		
	}
	else
		printf("error!");
	c->isready = true;
	return c;
}
register_ initialize() {
	register_ R;
	R.lenght = 0;
	R.value = 0;

	return R;
}
flag zero_set() {
	flag F;
	F.carry = false;
	F.negative = false;
	F.overflow = false;
	F.zero = false;

	return F;
}

void show_cpu(cpu c) {

	char bytes[4] = { 0,0,0,0 };
	printf("\n");
	printf("POINTERS:          ");  
	*bytes = c->IR.value;
    printf("IR = %X%X%X%X   ", bytes[3], bytes[2], bytes[1], bytes[0]);

	*bytes = c->PC.value;
    printf("PC = %X%X%X%X  ", bytes[3], bytes[2], bytes[1], bytes[0]);

	*bytes = c->STACK.value;
	printf("SP = %X%X%X%X  \n", bytes[3], bytes[2], bytes[1], bytes[0]);

	printf("FLAG:              ");
	printf("carry = %d  ", c->f.carry);
	printf("negative = %d  ", c->f.negative);
	printf("overflow = %d  ", c->f.overflow);
	printf("zero = %d  \n\n", c->f.zero);


	printf("REGISTERS:         ");
	for (int i = 0; i < R_NUM; i++) {
		printf("R%d = ", i);
		*bytes = c->r[i].value;
		if (bytes[0] > (char)0xF) {
			
			bytes[1] =bytes[0]-(char)0xF;
		}
		printf("%X%X%X%X ", bytes[3], bytes[2], bytes[1], bytes[0]);

		if (i == 3 || i == 7 || i == 11) {
			printf("\n");
			printf("REGISTERS:         ");
		}
	}
	printf("\n\n");
}
