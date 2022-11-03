//
//  bit_manipulations.c
//  C_test
//
//  Created by Vinod kumar Gorrepati on 11/2/22.
//

#include "bit_manipulations.h"


long long int set_bit(int64_t byte,int8_t position)
{
    return ((byte) |=  (1<<(position)));
}

long long int clear_bit(int64_t byte,int8_t position)
{
    return ((byte) &=  ~(1<<(position)));
}

long long int reverse_bit(int64_t byte,int8_t position)
{
    return ((byte) ^=  (1<<(position)));
}

uint8_t check_bit(int64_t byte,int8_t position)
{
    return ((byte) & (1<<(position)));
}

