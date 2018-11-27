//
//  exercise3_29.c
//  C How To Program
//
//  Created by Greg Tosato on 26/11/18.
//  Copyright © 2018 Dingo Byte Solutions. All rights reserved.
//

#include "exercise3_29.h"

void exercise3_29(void)
{
    int count = 1;
    
    while (count <= 10) {
        
        printf("%s\n", count % 2 ? "****" : "++++++++");
        ++count;
    }
}
