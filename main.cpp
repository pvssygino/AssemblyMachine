#include <iostream>
#include <stdio.h>
#include "CPU.h"
#include "ISA.h"
R r = refresh();
F f = refresh_();
S s = refresh__();

void esegui();
#pragma warning(disable:4996)

int main() {

	int choose = 0;
	enum menu {CREA, ESEGUI, ESCI};

	printf("---------------ASSEMBLY 8086---------------\n");
	printf(" 0. Crea nuovo file\n");
	printf(" 1. Esegui file\n");
	printf(" 2. Esci\n");
	printf("-------------------------------------------\n");
	printf(" >");

	scanf("%d", &choose);

	switch (choose) {
	case CREA:
		break;
	case ESEGUI:
		esegui();
		break;
	case ESCI:
		break;
	default:
		exit(0);
	}

	return 0;
}
void esegui() {

	int choose = 0;
	enum esegui_menu {CPU, MEMORIA};
	printf(" 1. Visualizza CPU\n");
	printf(" 2. Visualizza MEMORIA\n");
	printf(" >");

	scanf("%d", &choose);

	switch (choose)
	{
	case CPU:

		break;
	case MEMORIA: 
		stampa_S(s);
		stampa_F(f);
		stampa_R(r);
		
		break;
	default:
		break;
	}
}