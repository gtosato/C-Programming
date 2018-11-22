//
//  exercise3_25.c
//  C How To Program
//
//  Created by Greg Tosato on 21/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_25.h"

void exercise3_25(void)
{
    int counter = 1;
    
    // write header
    printf("N\t\t%d*N\t%d*N\t%d*N\n\n", counter * 10, counter * 100, counter * 1000);
    
    while (counter <= 10) {
        
        // write calculated values to table - condition aligns last row due to length of value
        if (counter * 1000 == 10000)
            printf("%d\t\t%d\t\t%d\t%d\n", counter, counter * 10, counter * 100, counter * 1000);
        else
            printf("%d\t\t%d\t\t%d\t\t%d\n", counter, counter * 10, counter * 100, counter * 1000);
        
        counter++;
    }
    
    printf("\n");
}
