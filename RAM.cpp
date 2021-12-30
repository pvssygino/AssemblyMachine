#include "RAM.h"
#include "BIN.h"
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
	
	int n = 0;
	std::string popped = "";
	char bytes[5];

	if (start > -1) {
		std::cout << "RAM BIN\n";
		while (n <=start) {
			convert(n, bytes);
			popped = ram_item[n];
			std::cout << bytes << ": " << popped;
			n++;
		}
	}
	else
		std::cout << "RAM VUOTA\n";
		
}
ram::~ram() {

}
