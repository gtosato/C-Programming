//
//  exercise3_27.c
//  C How To Program
//
//  Created by Greg Tosato on 21/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_27.h"

void exercise3_27(void)
{
    int counter = 1, largest = 0, second_largest = 0, value;
    
    while (counter <= 10) {
        
        printf("Enter number %d of 10: ", counter);
        scanf("%d", &value);
     
        // default first value to largest
        if (counter == 1)
            largest = value;

        else if (counter == 2) {
            
            // these conditions assign the largest values in order for first two entries
            if (value > largest) {
                
                second_largest = largest;
                largest = value;
            }
            else
                second_largest = value;

        }
        else {  // for remaining entries, first check value against largest, then second largest.
            if (value > largest) {
                
                second_largest = largest;
                largest = value;
            }
            else if (value > second_largest)
                
                second_largest = value;
        }
        
        counter++;
    }
    
    printf("\nThe two largest numbers are %d and %d.\n\n", second_largest, largest);
}
