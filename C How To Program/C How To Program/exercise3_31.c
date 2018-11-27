//
//  exercise3_31.c
//  C How To Program
//
//  Created by Greg Tosato on 26/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_31.h"

//  Sample problem demonstrates 'dangling else'
void exercise3_31(void)
{
    int x = 11, y = 9;

    if (x < 10) {

        if (y > 10) {
            printf("*****\n");
        }
        else {
            printf("#####\n"); // NOTE: THIS LINE WILL NOT PRINT UNLESS x AND y ARE LESS THAN 10
        }
    }
    
    printf("$$$$$\n");
    
    if (x < 10) {
        if (y > 10)
            printf("*****\n");
    }
    else {
        printf("#####\n");
        printf("$$$$$\n");
    }
}
