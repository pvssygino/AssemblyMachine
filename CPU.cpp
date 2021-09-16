#include "CPU.h"
F refresh_() {
	F f;
	f.carry = false;
	f.negative = false;
	f.overflow = false;
	f.zero = false;

	return f;
}
R refresh() {
	R r;
	for (int i = 0; i < MAX_SIZE; i++) {
		r.R1[i] = 0;
		r.R2[i] = 0;
		r.R3[i] = 0;
		r.R4[i] = 0;
		r.R5[i] = 0;
		r.R6[i] = 0;
		r.R7[i] = 0;
		r.R8[i] = 0;
		r.R9[i] = 0;
		r.R10[i] = 0;
		r.R11[i] = 0;
		r.R12[i] = 0;
		r.R13[i] = 0;
		r.R14[i] = 0;
		r.R15[i] = 0;
	}
	return r;
}
void stampa_R(R r) {
	printf("REGISTERS:   R0 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R1[i]);
	}
	printf("   ");
	printf("R1 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R1[i]);
	}
	printf("   ");
	printf("R2 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R2[i]);
	}
	printf("   ");
	printf("R3 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R3[i]);
	}
	printf("\n");
	printf("REGISTERS:   R4 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R4[i]);
	}
	printf("   ");
	printf("R5 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R5[i]);
	}
	printf("   ");
	printf("R6 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R6[i]);
	}
	printf("   ");
	printf("R7 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R7[i]);
	}
	printf("\n");
	printf("REGISTERS:   R8 = ");
	for(int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R8[i]);
	}
	printf("   ");
	printf("R9 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R9[i]);
	}
	printf("  ");
	printf("R10 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R10[i]);
	}
	printf("   ");
	printf("R11 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R11[i]);
	}
	printf("\n");
	printf("REGISTERS:   R12 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R12[i]);
	}
	printf("  ");
	printf("R13 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R13[i]);
	}
	printf("  ");
	printf("R14 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R14[i]);
	}
	printf("  ");
	printf("R15 = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", r.R15[i]);
	}
}
void stampa_F(F f) {
	printf("FLAG:        ");
	printf("carry = %d  ", f.carry);
	printf("negative = %d  ", f.negative);
	printf("overflow = %d  ", f.overflow);
	printf("zero = %d\n", f.zero);
	printf("\n");

}
S refresh__() {
	S s;
	for (int i = 0; i < MAX_SIZE; i++) {
		s.IR[i] = 0;
		s.PC[i] = 0;
		s.SP[i] = 0;
	}
	return s;
}
void stampa_S(S s) {
	printf("POINTERS:    ");
	printf("IR = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", s.IR[i]);
	}
	printf("  PC = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", s.PC[i]);
	}
	printf("  SP = ");
	for (int i = 0; i < MAX_SIZE; i++) {
		printf("%d", s.SP[i]);
	}
	printf("\n");
}