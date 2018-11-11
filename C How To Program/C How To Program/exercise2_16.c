//
//  Exercise2-16
//
//  Created by Greg Tosato on 8/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  This program asks the user to enter two numbers, obtains the two numbers from the
//  user, and prints the sum, product, difference, quotient and modulus of the two numbers

#include <stdio.h>

void exercise2_16(void)
{
    int num1, num2;
    
    printf("Please enter two integers: ");
    scanf("%d%d", &num1, &num2); /* read two integers */
    
    printf("The sum of the numbers is: %d\n", num1 + num2);
    printf("The product of the numbers is: %d\n", num1 * num2);
    printf("The difference of the numbers is: %d\n", num1 - num2);
    printf("The quotient of the numbers is: %d\n", num1 / num2);
    printf("The modulus of the numbers is: %d\n\n", num1 % num2);
}
