//
// Created by simon on 11/8/2022.
//

#include "instructions.h"

uint8_t* createMemory(int bytesize){
    uint8_t* memory = (uint8_t*)malloc(bytesize* sizeof(uint8_t));
    return (uint8_t *) memory;
}
void freeMemory(uint8_t* memory){
    free(memory);
}