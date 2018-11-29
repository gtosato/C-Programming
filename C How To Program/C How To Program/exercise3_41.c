//
//  exercise3_41.c
//  C How To Program
//
//  Created by Greg Tosato on 29/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  This program loops until highest available integer value.  Looping then stops.
#include "exercise3_41.h"

void exercise3_41(void)
{
    int counter = 2;
    
    while (counter) {

        printf("%d\n", counter);
        
        counter *= 2;
    }
}
