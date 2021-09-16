#include "FILE.h"
#include "CPU.h"
#pragma warning(disable:4996)
void getline(R r, int s_r, int d_r) {
	char line[20];

	char d[2];
	char s[2];

	FILE* pf = fopen("gino.txt", "r");
	fscanf(pf, "%s", line);
	printf("%s", line);
	fclose(pf);

	if (line == "mv") {

	}
	else if (line == "push") {
		
	}
	else if (line == "pop") {

	}
	else if (line == "add") {

		s[0] = line[4];
		s[1] = line[5];

		d[0] = line[7];
		d[1] = line[8];

		s_r = (s[0] - '0') + (s[1]-'0');
		d_r = (d[0] - '0') + (d[1] - '0');
	}
	else if (line == "sub") {

	}
	else if (line == "jmp") {

	}
}