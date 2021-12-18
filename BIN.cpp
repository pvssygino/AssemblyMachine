#include "BIN.h"

char* convert(int dec, char* output) {   //DEC TO BIN
    output[4] = '\0';
    output[3] = (dec & 1) + '0';
    output[2] = ((dec >> 1) & 1) + '0';
    output[1] = ((dec >> 2) & 1) + '0';
    output[0] = ((dec >> 3) & 1) + '0';
    return output;
}