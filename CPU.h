#include <stdio.h>
#ifndef CPU_H
#define CPU_H

#define MAX_SIZE 4

struct set {
	int PC[MAX_SIZE];
	int IR[MAX_SIZE];
	int SP[MAX_SIZE];
};

typedef set S;

struct FLAG {
	bool zero;
	bool carry;
	bool overflow;
	bool negative;
};

typedef FLAG F;

struct REGISTRI {

	int R1[MAX_SIZE];
	int R2[MAX_SIZE];
	int R3[MAX_SIZE];
	int R4[MAX_SIZE];
	int R5[MAX_SIZE];
	int R6[MAX_SIZE];
	int R7[MAX_SIZE];
	int R8[MAX_SIZE]; 
	int R9[MAX_SIZE];
	int R10[MAX_SIZE];
	int R11[MAX_SIZE];
	int R12[MAX_SIZE];
	int R13[MAX_SIZE];
	int R14[MAX_SIZE];
	int R15[MAX_SIZE];

};

typedef struct REGISTRI R;
R refresh();
F refresh_();
S refresh__();
void stampa_R(R r);
void stampa_F(F f);
void stampa_S(S s);
#endif