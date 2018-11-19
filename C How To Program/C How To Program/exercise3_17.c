//
//  exercise3_17.c
//  C How To Program
//
//  Created by Greg Tosato on 18/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
//  THIS PROGRAM INPUTS THE MILES DRIVEN AND GALLONS USED FOR EACH TANKFUL OF GASOLINE.
//  IT THEN PRINTS THE COMBINED MILES PER GALLON OBTAINED FOR ALL TANKFULS.

#include <stdio.h>

void exercise3_17(void)
{
    int miles, total_miles = 0;
    float gallons = 0, total_gallons = 0;
    
    while (gallons != -1) {

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
        
        if (gallons != -1) {
            
            printf("Enter the miles driven: ");
            scanf("%d", &miles);
            
            printf("The miles / gallon for this tank was %f\n\n", (float) miles / gallons);

            total_gallons += gallons;
            total_miles += miles;
        }
    }
    
    printf("\nThe overall average miles/gallon was %f\n\n", (float) total_miles / total_gallons);
}
