#include "CPU.h"
#include "ISA.h"
#include "SETTINGS.h"


int main() {
	cpu cpu_ = new_();
	enum MENU{CREA, ESEGUI};
	int menu = 0;

	printf("---------------------------------------------\n");
	printf(" 1. Crea                                    +\n");
	printf(" 2. Esegui                                  +\n");
	printf("---------------------------------------------\n");
	printf("> ");


	char comando[9] = "add 4 r5";
	console_(cpu_,comando);

	scanf("%d", &menu);
	switch (menu)
	{
	case CREA:
		printf(" > ");
		show_cpu(cpu_);		
		break;
	case ESEGUI:
		break;
	}
	return 0;
}
