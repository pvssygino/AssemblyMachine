#include <stdio.h>
#include "CPU.h"
#ifndef ISA_H
#define ISA_H

int add(R r);
void push(R r);
void pop(R r);
void move(R r,int value);
int sub(R r);
#endif
