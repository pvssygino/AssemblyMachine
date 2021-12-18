#include "RAM.h"
#include <iostream>
ram::ram() {
	start = -1;
	stack_start = -1;
}
bool ram::push_(std::string address) {
	start++;
	ram_item[start] = address;
	return true;
}
std::string ram::pop() {
	std::string popped = "";
	if (start > -1) {
		popped = ram_item[start];
		start--;
	}
	else
		std::cout << "RAM VUOTA!";
	return popped;
}
void ram::show_ram() {
	int n = start;
	std::string popped = "";

	if (n > -1) {
		std::cout << "RAM BIN\n";
		while (n != -1) {
			popped = ram_item[n];
			std::cout << n << ": " << popped;
			n--;
		}
	}
	else
		std::cout << "RAM VUOTA\n";
}
ram::~ram() {

}