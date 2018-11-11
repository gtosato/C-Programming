//
//  Exercise2-24
//
//  Created by Greg Tosato on 10/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM INPUTS A NUMBER AND DETERMINES IF IT IS ODD OR EVEN

#include <stdio.h>

void exercise2_24(void)
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
        printf("%d is an even number.\n\n", num);
    else
        printf("%d is an odd number.\n\n", num);
}
