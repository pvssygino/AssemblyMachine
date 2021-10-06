#include <stdio.h>
#include <stdlib.h>
#include "CPU.h"
#include "SETTINGS.h"
#ifndef ISA_H
#define ISA_H

#define push "push"
#define add "add"
#define mv "mv"
#define sub "sub"
#define jmp "jmp"

void add_(cpu ,char* , char* );

void console_(cpu,char*);
#endif ISA_H
