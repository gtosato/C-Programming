//
//  Exercise2-19
//
//  Created by Greg Tosato on 8/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  This program takes three numbers from user, then displays the sum, average, product,
//  smallest, and largest.

#include <stdio.h>

void exercise2_19(void)
{
    
    int num1, num2, num3, largest, smallest;
    
    printf("Input three different integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    printf("Sum is %d\n", num1 + num2 + num3);
    printf("Average is %d\n", (num1 + num2 + num3) / 3);
    printf("Product is %d\n", num1 * num2 * num3);
    
    // default num1 to largest and smallest
    largest = num1;
    smallest = num1;
    
    // Determine if num2 or num3 are smaller or equal to num1
    if ((num2 <= num1) && (num2 <= num3))
        
        smallest = num2;
    
    if ((num3 <= num1) && (num3 <= num2))
        
        smallest = num3;
    
    // Determine if num2 or num3 are larger or equal to num1
    if ((num2 >= num1) && (num2 >= num3))
        
        largest = num2;
    
    if ((num3 >= num1) && (num3 >= num2))
        
        largest = num3;
    
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n\n", largest);
}
