//
//  exercise3_28.c
//  C How To Program
//
//  Created by Greg Tosato on 21/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_28.h"

void exercise3_28(void)
{
    int passes = 0, failures = 0, student = 1, result;
    
    while (student <= 10) {
        
        printf("Enter result (1=pass, 2=fail): ");
        scanf("%d", &result);
        
        if (result == 1) {
            passes = passes + 1;
            student = student + 1;
        }
        else if (result == 2) {
            failures = failures + 1;
            student = student + 1;
        }
        else {
            
            printf("Invalid entry.  Must be 1 or 2\n");
        }
    }
    
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);
    
    if (passes > 8)
        printf("Raise tuition\n");
}
