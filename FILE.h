#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#ifndef FILE_H
#define FILE_H

void crea_file() {
	char nome[16];
	printf("\nNome file: ");
	scanf("%s", nome);

	while (true) {
		char command[20];
		fgets(command, 20, stdin);
		printf(" >");
	}
}

#endif
