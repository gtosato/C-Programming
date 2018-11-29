//
//  exercise3_38.c
//  C How To Program
//
//  Created by Greg Tosato on 29/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_38.h"

void exercise3_38(void)
{
    int counter = 1;
    
    while (counter <= 100) {
        
        printf("*");
        
        if (counter % 10 == 0)
            printf("\n");
        
        counter++;
    }
}
