#include "ISA.h"
#pragma warning (disable:4996)
void add_(cpu cpu_,char* sx, char* dx) {

	char s_; 
	char d_;
	int k_flag = 0;
	if (sx[0] != 'r' && dx[0] == 'r') {

		s_ = sx[0];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value += s_ - '0';
		k_flag = cpu_->r[d_ - '0'].value;
		flag_set(cpu_, k_flag);
	}
	else if (sx[0] == 'r' && dx[0] == 'r') {

		s_ = sx[1];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value += cpu_->r[s_-'0'].value;
		k_flag = cpu_->r[d_ - '0'].value;
		flag_set(cpu_, k_flag);
	}	 
	else
		printf("error!\n");
}
void sub_(cpu cpu_, char* sx, char* dx) {

	char s_;
	char d_;
	int k_flag = 0;
	if (sx[0] != 'r' && dx[0] == 'r') {

		s_ = sx[0];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value -= s_ - '0';
		k_flag = cpu_->r[d_ - '0'].value;
		flag_set(cpu_, k_flag);

	}
	else if (sx[0] == 'r' && dx[0] == 'r') {

		s_ = sx[1];
		d_ = dx[1];
		cpu_->r[d_ - '0'].value -= cpu_->r[s_-'0'].value;
		k_flag = cpu_->r[d_ - '0'].value;
		flag_set(cpu_, k_flag);
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
void flag_set(cpu cpu_,int k) {

	if (k == 0) {
		cpu_->f.zero = true;
		cpu_->f.negative = false;
		cpu_->f.overflow = false;
	}
	else 
		cpu_->f.zero = false;
	
	if (k < 0) {
		cpu_->f.negative = true;
		cpu_->f.zero = false;
		cpu_->f.overflow = false;

	}
	else
	cpu_->f.negative = false; 

	if (k > (2 ^ 16)) {
		cpu_->f.overflow = true; 
		cpu_->f.zero = false;
		cpu_->f.negative = false;
	}
	else
		cpu_->f.overflow = false;


}
