//
//  exercise3_36.c
//  C How To Program
//
//  Created by Greg Tosato on 28/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM CONVERTS BINARY NUMBERS TO DECIMAL NUMBERS

#include "exercise3_36.h"

void exercise3_36(void)
{
    int binary_number, bit8 = 0, bit7 = 0, bit6 = 0, bit5 = 0, bit4 = 0, bit3 = 0, bit2 = 0, bit1 = 0, decimal_num = 0;
    
    printf("Enter an 8-bit binary number: ");
    scanf("%d", &binary_number);
    
    bit1 = binary_number % 10; // 1
    bit2 = (binary_number % 100) / 10; // 2
    bit3 = (binary_number % 1000) / 100; // 4
    bit4 = (binary_number % 10000) / 1000; // 8
    bit5 = (binary_number % 100000) / 10000; // 16
    bit6 = (binary_number % 1000000) / 100000; // 32
    bit7 = (binary_number % 10000000) / 1000000; // 64
    bit8 = (binary_number % 100000000) / 10000000; // 128

    decimal_num = (bit8 * 128) + (bit7 * 64) + (bit6 * 32) + (bit5 * 16) + (bit4 * 8) + (bit3 * 4) + (bit2 * 2) + bit1;
    
    printf("\nThe binary number %d converted to decimal is %d\n\n", binary_number, decimal_num);
    
}
