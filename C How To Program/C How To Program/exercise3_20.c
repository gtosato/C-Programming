//
//  exercise3_20.c
//  C How To Program
//
//  Created by Greg Tosato on 19/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_20.h"

void exercise3_20(void)
{
    float principal = 0, interest = 0, interest_rate, term_of_loan;
    
    while (principal != -1) {
        
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
        
        if (principal != -1) {
            
            printf("Enter interest rate: ");
            scanf("%f", &interest_rate);
            
            printf("Enter term of the loan in days: ");
            scanf("%f", &term_of_loan);
            
            interest = principal * interest_rate * term_of_loan / 365;
            
            printf("The interest charge is $%.2f\n", interest);
        }
        
        printf("\n");
    }
}
