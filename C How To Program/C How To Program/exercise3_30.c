//
//  exercise3_30.c
//  C How To Program
//
//  Created by Greg Tosato on 26/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_30.h"

void exercise3_30(void)
{
    int row = 10, column;
    
    while (row >= 1) {
        column = 1;
        
        while (column <= 10) {
            printf("%s", row % 2 ? "<" : ">");
            ++column;
        }
        
        --row;
        printf("\n");
    }
}
