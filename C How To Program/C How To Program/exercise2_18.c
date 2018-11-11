//
//  Exercise2-18
//
//  Created by Greg Tosato on 8/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  This program asks the user for two integers, then determines which number is greater
//  or if the numbers are equal.

#include <stdio.h>

void exercise2_18(void) {
    
    int num1, num2;
    
    printf("Please enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    if (num1 > num2)
        printf("The first number %d is larger than the second number %d\n", num1, num2);
    
    if (num2 > num1)
        printf("The second number %d is larger than the first number %d\n", num2, num1);
    
    if (num1 == num2)
        printf("These numbers are equal.\n");
    
    printf("\n");
}
