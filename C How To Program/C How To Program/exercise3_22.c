//
//  exercise3_22.c
//  C How To Program
//
//  Created by Greg Tosato on 19/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_22.h"

void exercise3_22(void)
{
    int counter = 10;
    
    while (counter >= 0) {
        
        printf("Pre-decrementing counter is %d\n", --counter);
    }

    counter = 10;
    printf("\n");
    
    while (counter >= 0) {
        
        printf("Post-decrementing counter is %d\n", counter--);
    }
    
    printf("\n");
}
