#ifndef RAM_H
#define RAM_H
#include <iostream>
#include <stdio.h>
#include <string.h>

#define R_SIZE 1000

class ram {
	int start;
	int stack_start;
public:
	ram();
	~ram();
	std::string ram_item[R_SIZE];
	bool push_(std::string address);
	std::string pop();
	void show_ram();
};
#endif
