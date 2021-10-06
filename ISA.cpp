#include "ISA.h"
#pragma warning (disable:4996)
void add_(cpu cpu_,char* sx, char* dx) {

	if (sx[0] != 'r' && dx[0] == 'r'){
		
		char s_ = sx[0];                                 
		char d_ = dx[1];
		cpu_->r[d_ - '0'].value += s_ - '0';

	}
	

}
void console_(cpu cpu_,char*packet) {

	char *function = strtok(packet," ");
	char* sx = strtok(NULL, " ");
	char* dx = strtok(NULL, " ");

		if (strcmp(function,add)==NULL) {
			printf("gino");
			printf("%s %s %s", function, sx, dx);
			
			add_(cpu_, sx, dx);


	}
		
}
