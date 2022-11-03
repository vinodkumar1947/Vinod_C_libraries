//
//  time_ops.h
//  C_test
//
//  Created by Vinod kumar Gorrepati on 11/2/22.
//

#ifndef time_ops_h
#define time_ops_h

#include <stdio.h>

typedef enum {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    week__COUNT
} week;

int to_seconds(int hours, int minutes, int seconds);

#endif /* time_ops_h */
