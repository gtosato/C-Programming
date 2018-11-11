//
//  Exercise2-26
//
//  Created by Greg Tosato on 10/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM READS IN TWO INTEGERS AND DETERMINES AND PRINTS IF THE FIRST IS A MULTIPLE
//  OF THE SECOND.
#include <stdio.h>

void exercise2_26(void) {
    
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    if (num1 % num2 == 0)
        
        printf("%d is a multiple of %d\n\n", num1, num2);
    else
        printf("%d is not a multiple of %d\n\n", num1, num2);
}
