//
//  string_ops.c
//  C_test
//
//  Created by Vinod kumar Gorrepati on 11/2/22.
//
#include <stdio.h>
#include <string.h>
#include "string_ops.h"

char* string_reverse(char* string)
{
#if 1
    static int i = 0;
    static char temp_str[100];
    if(*string)
    {
        string_reverse(string+1);
        temp_str[i++] = *string;
    }
    return temp_str;
#endif
}

int myAtoi(char* str)
{
    // Initialize result
    int res = 0;
 
    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corresponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
    // return result.
    return res;
}
