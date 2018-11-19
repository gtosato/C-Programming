//
//  exercise3_24.c
//  C How To Program
//
//  Created by Greg Tosato on 19/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_24.h"

void exercise3_24(void)
{
    int counter = 1, number, largest = 0;
    
    while (counter <= 10) {
        
        printf("Enter number %d of 10: ", counter);
        scanf("%d", &number);
        
        // assign number to largest on first iteration
        if (counter == 1) {
            largest = number;
        }

        if (number > largest)
            largest = number;
        
        counter++;
    }
    
    printf("\nThe largest number is %d\n\n", largest);
}
