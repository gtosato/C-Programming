//
//  exercise3_33.c
//  C How To Program
//
//  Created by Greg Tosato on 26/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_33.h"

void exercise3_33(void)
{
    int side_length, width_counter = 1, height_counter = 1;
    
    printf("Enter side length of square: ");
    scanf("%d", &side_length);
    
    while (height_counter <= side_length) {
        
        while (width_counter <= side_length) {
            printf("*");
            width_counter++;
        }
        
        printf("\n");
        width_counter = 1;
        height_counter++;
    }
    
    printf("\n");
}
