#include <stdio.h>
#include <stdlib.h>

#define R_LENGHT 4
#define R_NUM 16

#ifndef CPU_HEADER
#define CPU_HEADER

struct register_ {

	int value;
	int lenght;
};

struct flag {

	bool zero;
	bool overflow;
	bool negative;
	bool carry;
};

struct CPU {

	register_ r[R_NUM];
	flag f;

	register_ PC;
	register_ IR;
	register_ STACK;
	bool isready;

};
typedef CPU *cpu;

cpu new_();
void show_cpu(cpu c);
register_ initialize();
flag zero_set();
#endif
