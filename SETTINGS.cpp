#include "SETTINGS.h"
#include "ISA.h"
char* split_(char *command) {

	char* function;
	function = strtok(command, " ");
	
	return function;
}
