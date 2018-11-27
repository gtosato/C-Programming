//
//  exercise3_37.c
//  C How To Program
//
//  Created by Greg Tosato on 28/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_37.h"

void exercise3_37(void)
{
    int counter = 1;
    
    while (counter <= 3000000) {
        
        if (counter % 1000000 == 0) {
            printf("%d\n", counter);
        }
        counter++;
    }
    printf("\n");
}
