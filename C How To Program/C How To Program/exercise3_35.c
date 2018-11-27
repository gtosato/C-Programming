//
//  exercise3_35.c
//  C How To Program
//
//  Created by Greg Tosato on 28/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_35.h"

void exercise3_35(void)
{
    int digit1, digit2, digit3, digit4, digit5, number, reverse_number = 0;
    
    printf("Enter a five-digit integer: ");
    scanf("%d", &number);
    
    // break apart number
    digit5 = number % 10;
    digit4 = (number % 100) / 10;
    digit3 = (number % 1000) / 100;
    digit2 = (number % 10000) / 1000;
    digit1 = (number % 100000) / 10000;
    
    reverse_number = (digit5 * 10000) + (digit4 * 1000) + (digit3 * 100) + (digit2 * 10) + digit1;

    if (number == reverse_number)
        printf("The number entered is a palindrome.\n\n");
    else
        printf("The number entered is not a palindrome.\n\n");
}
