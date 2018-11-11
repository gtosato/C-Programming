//
//  Exercise2-17
//
//  Created by Greg Tosato on 8/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  This program prints the numbers 1-4 using various methods.

#include <stdio.h>

void exercise2_17(void) {
    
    int num1 = 1, num2 = 2, num3 = 3, num4 = 4;
    
    printf("The numbers are 1, 2, 3, 4\n");
    printf("The numbers are %d, %d, %d, %d\n", num1, num2, num3, num4);
    printf("The numbers are %d, ", num1);
    printf("%d, ", num2);
    printf("%d, ", num3);
    printf("%d\n\n", num4);
}
