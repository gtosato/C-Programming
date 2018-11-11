//
//  Exercise2-30
//
//  Created by Greg Tosato on 10/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM ENTERS A FIVE-DIGIT NUMBER, THEN SEPARATES THE NUMBER BY ITS INDIVIDUAL DIGITS.

#include <stdio.h>

void exercise2_30(void) {
    
    int num, ten_thousands, thousands, hundreds, tens, ones;
    
    printf("Please enter a five digit number: ");
    scanf("%d", &num);
    
    ones = (num % 10) / 1;
    tens = ((num % 100) - ones) / 10;
    hundreds = ((num % 1000) - tens - ones) / 100;
    thousands = ((num % 10000) - hundreds - tens - ones) / 1000;
    ten_thousands = ((num % 100000) - thousands - hundreds - tens - ones) / 10000;
    
    printf("%d   %d   %d   %d   %d\n\n", ten_thousands, thousands, hundreds, tens, ones);
}
