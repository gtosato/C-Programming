//
//  exercise3_21.c
//  C How To Program
//
//  Created by Greg Tosato on 19/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_21.h"

void exercise3_21(void)
{
    int hours = 0, overtime_hours = 0;
    float rate;
    
    while (hours != -1) {
        
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
        
        if (hours != -1) {
            
            printf("Enter hourly rate of the worker ($00.00): ");
            scanf("%f", &rate);
            
            if (hours > 40) {
                overtime_hours = hours - 40;
                hours = 40;  // set hours to 40 as overtime hours are calculated at time and a half
            }
            else
                overtime_hours = 0;
            
            printf("Salary is $%.2f\n", (hours * rate) + (overtime_hours * (rate * 1.5)));
        }
        printf("\n");
    }
}
