//
//  time_ops.c
//  C_test
//
//  Created by Vinod kumar Gorrepati on 11/2/22.
//

#include "time_ops.h"

int to_seconds(int hours, int minutes, int seconds)
{
    return (hours*3600)+(minutes*60)+seconds;
}
