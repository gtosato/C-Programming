//
//  exercise3_40.c
//  C How To Program
//
//  Created by Greg Tosato on 29/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_40.h"

void exercise3_40(void)
{
    int row_counter = 0, col_counter = 0;
    
    // Create loop to iterate through each row of board top to bottom
    while (row_counter < 8) {
        
        // Create loop to iterate across columns of each row
        while (col_counter < 16) {

            // If row number is even and col number is even, print asterisk
            // If row number is even and col number is odd, print space
            if (row_counter % 2 == 0)
                printf("%s", col_counter % 2 == 0 ? "*" : " ");
            
            // If row number is odd and col number is even, print space
            // If row number is odd and col number is odd, print asterisk
            else
                printf("%s", col_counter % 2 == 0 ? " " : "*");
            
            // Move through each column in current row
            col_counter++;
        }
        
        // Row is complete, move to next row
        printf("\n");
        
        // Reset column count before moving to next row
        col_counter = 1;
        
        // Move to next row
        row_counter++;
    }
}
