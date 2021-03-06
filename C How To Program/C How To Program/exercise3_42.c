//
//  exercise3_42.c
//  C How To Program
//
//  Created by Greg Tosato on 29/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include <stdio.h>
    
void exercise3_42(void)
{
    const float PI = 3.14159;
    
    // diameter = 2r
    // circumference = 2πr
    // area = πr2
    float radius;
    
    printf("Please enter the radius of a circle: ");
    scanf("%f", &radius);
    
    // display results, truncating to two decimal places
    printf("The diameter is: %.2f\n", 2 * radius);
    printf("The circumference is: %.2f\n", 2 * PI * radius);
    printf("The area is: %.2f\n\n", PI * (radius * radius));

}
