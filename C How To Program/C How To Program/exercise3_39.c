//
//  exercise3_39.c
//  C How To Program
//
//  Created by Greg Tosato on 29/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_39.h"

void exercise3_39(void)
{
    int number, total_digits = 0, counter, position = 1, total_sevens = 0, current_number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    // find the number of digits in the number
    counter = number;
    while(counter != 0)
    {
        counter /= 10; // ie USER ENTERS 23452 -> 2345 (1) -> 234 (2) -> 23 (3) -> 2 (4) -> 0 (5) (QUITS LOOP)
        total_digits++;
    }
    
    counter = 1;
    
    // loop through each position.  If current position is a 7, add it to total_sevens
    while (counter <= total_digits) {
        
        position *= 10;
        current_number = (number % position) / (position / 10);
        
        if (current_number == 7)
            total_sevens += 1;
        
        counter++;
    }
    
    printf("\nTotal number of sevens is %d\n\n", total_sevens);
}
