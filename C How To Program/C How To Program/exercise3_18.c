//
//  exercise3_18.c
//  C How To Program
//
//  Created by Greg Tosato on 19/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//
#include <stdio.h>

void exercise3_18(void)
{
    int account_number = 0;
    float beginning_balance = 0, total_charges = 0, total_credits = 0, credit_limit = 0, current_balance = 0;
    
    while (account_number != -1) {

        printf("Enter account number (-1 to end): ");
        scanf("%d", &account_number);
        
        if (account_number != -1) {

            printf("Enter beginning balance: ");
            scanf("%f", &beginning_balance);
            
            printf("Enter total charges: ");
            scanf("%f", &total_charges);
            
            printf("Enter total credits: ");
            scanf("%f", &total_credits);
            
            printf("Enter credit limit: ");
            scanf("%f", &credit_limit);
            
            current_balance = beginning_balance + total_charges - total_credits;
            
            if (current_balance > credit_limit) {
                
                printf("Account:\t\t%d\n", account_number);
                printf("Credit limit: %.2f\n", credit_limit);
                printf("Balance: %.2f\n", current_balance);
                printf("Credit Limit Exceeded.\n");
            }
        }

        printf("\n");
    }
}
