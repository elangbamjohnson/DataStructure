//
//  PatternRecognition.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/17/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "PatternRecognition.h"

int match(char *a, char *b)
{
//    int c;
    int position = 0;
    char *x, *y;
    
    x = a;
    y = b;
    
    while(*a)
    {
        while(*x==*y)
        {
            x++;
            y++;
            if(*x=='\0'||*y=='\0')
                break;
        }
        if(*y=='\0')
            break;
        
        a++;
        position++;
        x = a;
        y = b;
    }
    if(*a)
        return position;
    else   
        return -1;   
}
