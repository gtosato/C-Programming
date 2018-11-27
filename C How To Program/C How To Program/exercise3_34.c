//
//  exercise3_34.c
//  C How To Program
//
//  Created by Greg Tosato on 26/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM READS IN AN INTEGER AND DISPLAYS A SQUARE

#include "exercise3_34.h"

void exercise3_34(void)
{
    int size, width = 1, counter = 1, number_of_middle_rows = 0;
    
    printf("Enter size of square: ");
    scanf("%d", &size);

    number_of_middle_rows = size - 2; // subtract top and bottom rows to get number of middle rows

    // draw first row of square
    while (width <= size) {
        printf("*");
        width++;
    }
        
    // reset width counter and move to next row
    width = 1;
    printf("\n");
    
    // draw middle rows of square
    while (counter <= number_of_middle_rows)
    {
        while (width <= size) {
            if (width == 1)
                printf("*");
            else {
                if (width == size)
                    printf("*\n");
                else
                    printf(" ");
            }
            width++;
        }
        
        // reset width counter and move to next row in square
        width = 1;
        counter++;
    }

    // draw last row of square
    while (width <= size) {
        printf("*");
        width++;
    }
    
    printf("\n\n");
}
