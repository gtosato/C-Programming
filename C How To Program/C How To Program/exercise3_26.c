//
//  exercise3_26.c
//  C How To Program
//
//  Created by Greg Tosato on 21/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_26.h"

void exercise3_26(void)
{
    int counter = 3;
    
    // write header
    printf("A\t\tA+2\t\tA+4\t\tA+6\n\n");
    
    while (counter <= 15) {
        
        // write calculated values to screen
        printf("%d\t\t%d\t\t%d\t\t%d\n", counter, counter + 2, counter + 4, counter + 6);
        
        counter+= 3;
    }
    
    printf("\n");
}
