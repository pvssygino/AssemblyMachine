#include "CPU.h"
#include "ISA.h"
#include "SETTINGS.h"
#include <iostream>
#include <string.h>

void console_(char* packet);
cpu cpu_ = new_();

int main() {
	enum MENU{CREA, ESEGUI};
	int menu = 0;
	char comando[15];

	printf("---------------------------------------------\n");
	printf(" 0. Crea                                    +\n");
	printf(" 1. Esegui                                  +\n");
	printf("---------------------------------------------\n");
	printf("> ");
	scanf("%d", &menu);
	
	switch (menu)
	{
	case CREA:
		char n_file[15];
		printf("\n");
		printf("Inserisci il nome del file: ");
		scanf("%s", n_file);
		printf("Scrittura del file %s..\n", n_file);			
		break;

	case ESEGUI:
		while (true) {
			fgets(comando, 15, stdin);
			console_(comando);
			printf("> ");
		}
		break;

	default:
		printf("                                       error!\n");
		cpu_->isready = false;
		//delete(comando);
		//free(cpu_);
		//exit(0);
		break;	
		
	}
	return 0;		
}
void console_(char* packet) {

	if (strncmp(packet, "showcpu", 7) == 0) {
		show_cpu(cpu_);
	}
	else {

		char* function = strtok(packet, " ");
		char* sx = strtok(NULL, " ");
		char* dx = strtok(NULL, " ");

		if (strcmp(function, add) == NULL) {
			//printf("%s %s %s", function, sx, dx);
			add_(cpu_, sx, dx);
		}
		else if (strcmp(function, sub) == NULL) {
			//printf("%s %s %s", function, sx, dx);
			sub_(cpu_, sx, dx);

		}
		else if (strcmp(function, jmp) == NULL) {
			//printf("%s %s %s", function, sx, dx);
		}
		else if (strcmp(function, mv) == NULL) {
			//printf("%s %s %s", function, sx, dx);
			mv_(cpu_, sx, dx);
		}
	}
}
