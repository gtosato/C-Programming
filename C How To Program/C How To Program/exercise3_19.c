//
//  exercise3_19.c
//  C How To Program
//
//  Created by Greg Tosato on 19/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_19.h"

void exercise3_19(void)
{
    float sales = 0;
    
    while (sales != -1) {
        
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        
        if (sales != -1)
            printf("Salary is $%.2f\n", 200 + (sales * 0.09));
        
        printf("\n");
    }
}
