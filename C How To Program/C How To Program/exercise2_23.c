//
//  Exercise2-23
//
//  Created by Greg Tosato on 10/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM READS IN 5 INTEGERS AND DETERMINES THE SMALLEST AND LARGEST VALUES

#include <stdio.h>

void exercise2_23(void) {
    
    int num1, num2, num3, num4, num5, largest, smallest;
    
    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    
    // default first number to largest and smallest
    largest = num1;
    smallest = num1;
    
    // compare each value to largest, assigning it to largest if its value exceeds largest
    if (num2 > largest)
        largest = num2;
    
    if (num3 > largest)
        largest = num3;
    
    if (num4 > largest)
        largest = num4;
    
    if (num5 > largest)
        largest = num5;
    
    // compare each value to smallest, assigning it to smallest if its value exceeds smallest
    if (num2 < smallest)
        smallest = num2;
    
    if (num3 < smallest)
        smallest = num3;
    
    if (num4 < smallest)
        smallest = num4;
    
    if (num5 < smallest)
        smallest = num5;
    
    // display results
    printf("The smallest value is: %d\n", smallest);
    printf("The largest value is: %d\n\n", largest);
}
