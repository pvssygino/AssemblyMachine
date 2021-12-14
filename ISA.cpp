#include "ISA.h"
#pragma warning (disable:4996)
void add_(cpu cpu_,char* sx, char* dx) {

	char s_; 
	char d_;


	if (sx[0] != 'r' && dx[0] == 'r') {

		s_ = sx[0];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value += s_ - '0';

	}
	else if (sx[0] == 'r' && dx[0] == 'r') {

		s_ = sx[1];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value += cpu_->r[s_-'0'].value;

	}
	else
		printf("error!\n");
}
void sub_(cpu cpu_, char* sx, char* dx) {

	char s_;
	char d_;

	if (sx[0] != 'r' && dx[0] == 'r') {

		s_ = sx[0];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value -= s_ - '0';

	}
	else if (sx[0] == 'r' && dx[0] == 'r') {

		s_ = sx[1];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value -= cpu_->r[s_-'0'].value;

	}
	else
		printf("error!\n");
}

void mv_(cpu cpu_, char* sx, char* dx) {

	char s_;
	char d_;

	if (sx[0] != 'r' && dx[0] == 'r') {

		s_ = sx[0];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value = s_-'0';

	}
	else if (sx[0] == 'r' && dx[0] == 'r') {

		s_ = sx[1];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value = cpu_->r[s_-'0'].value;

	}
	else
		printf("error!");
}
