//
//  exercise3_44.c
//  C How To Program
//
//  Created by Greg Tosato on 29/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM DETERMINES IF THREE NUMBERS ENTERED COULD BE REPRESENT THE SIDES OF A TRIANGLE
//  FOR THIS TO BE TRUE, THE FOLLOWING CASES MUST BE MET
//  (a + b) > c
//  (b + c) > a
//  (a + c) > b

#include "exercise3_44.h"

void exercise3_44(void)
{
    int valid = 0;
    float a, b, c;
    
    // Continue looping until user enters three nonzero values
    while (valid == 0) {
        
        // Set valid to 1. If any of the three numbers entered is zero, the user will be prompted to re-enter values.
        valid = 1;
        
        printf("Enter 3 numbers: ");
        scanf("%f%f%f", &a, &b, &c);
        
        if (a == 0)
            valid = 0;
        
        if (b == 0)
            valid = 0;
        
        if (c == 0) {
            valid = 0;
        }
        
        // No number entered was 0.  Now determine if three sides could be a triangle
        if (valid == 1) {

            if ((a + b) <= c)
                valid = -1;

            if ((b + c) <= a)
                valid = -1;

            if ((a + c) <= b)
                valid = -1;

            // Valid value is still set to true.  All three sides meet requirements to possibly be a triangle
            if (valid == 1)
                printf("%.2f, %.2f, and %.2f could represent the sides of a triangle.\n", a, b, c);
            else
                printf("%.2f, %.2f, and %.2f cannot represent the sides of a triangle.\n", a, b, c);
        }
        else
            printf("One or more values entered is 0, which is invalid.\n\n");
    }
}
