#include "CPU.h"
#include "ISA.h"
#include "BIN.h"
#include "RAM.h"
#include <iostream>
void console_(char* packet);
cpu cpu_ = new_();
ram ram_;
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
		while (true) {
			fgets(comando, 15, stdin);
			console_(comando);
			printf("> ");
		}		
		break;

	case ESEGUI:
		char n_file[15];
		printf("\n");
		printf("Inserisci il nome del file: ");
		scanf("%s", n_file);
		printf("Scrittura del file %s..\n", n_file);
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

	std::string bin_address = "";

	if (strlen(packet)>1){ // Verifica che la stringa packet non sia vuota
		char* function = strtok(packet, " ");
		char* sx = strtok(NULL, " ");
		char* dx = strtok(NULL, " ");

		if (strcmp(function, add) == NULL) {
			//printf("%s %s %s", function, sx, dx);
			bin_address += LOGIC_GROUP;
			bin_address += ADD_CODE;
			bin_address += sx;
			bin_address += dx;
			add_(cpu_, sx, dx);
			ram_.push_(bin_address);

			std::cout << "                                                      ------->" << bin_address;
		}
		else if (strcmp(function, sub) == NULL) {
			//printf("%s %s %s", function, sx, dx);
			bin_address += LOGIC_GROUP;
			bin_address += SUB_CODE;
			bin_address += sx;
			bin_address += dx;
			sub_(cpu_, sx, dx);
            ram_.push_(bin_address);

			std::cout << "                                                      ------->" << bin_address;
		}
		else if (strcmp(function, jmp) == NULL) {
			//printf("%s %s %s", function, sx, dx);
			bin_address += LOGIC_GROUP;
			ram_.push_(bin_address);
		}
		else if (strcmp(function, mv) == NULL) {
			//printf("%s %s %s", function, sx, dx);
			bin_address += LOGIC_GROUP;
			mv_(cpu_, sx, dx);
			ram_.push_(bin_address);
		}
		else if (strncmp(packet, "showcpu", 7) == NULL) {
			show_cpu(cpu_);
			ram_.show_ram();
		}
		else if (strncmp(packet, "showmem", 7) == NULL) {

		}
		else if (strncmp(packet, "reset", 5) == NULL) {
		}
		else if (strncmp(packet, "exit", 4) == NULL) {
			exit(0);
		}
		else
			printf("                                                         ------->error!\n");
	}
	
}

