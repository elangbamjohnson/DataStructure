//
//  PatternRecognition.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/17/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "PatternRecognition.h"





int match(char *string, char *pattern){
    int position = 0;
    char *a;
    char *b;
    
    a = string;
    b = pattern;
    
    while (*string) {
        while (*a == *b) {
            a++;
            b++;
            if (*a == '\0' || *b == '\0')
                break;
            
            
        }
        
        if (*b == '\0')
            break;
        
        string++;
        a = string;
        b = pattern;
        
        position++;
        
    }
    
    if (*string) {
        return position;
    }
    else
        return -1;
}




//int match(char *string, char *pattern)
//{
////    int c;
//    int position = 0;
//    char *x, *y;
//    
//    x = string;
//    y = pattern;
//    
//    while(*string)
//    {
//        while(*x==*y)
//        {
//            x++;
//            y++;
//            if(*x=='\0'||*y=='\0')
//                break;
//        }
//        if(*y=='\0')
//            break;
//        
//        string++;
//        position++;
//        x = string;
//        y = pattern;
//    }
//    if(*string)
//        return position;
//    else   
//        return -1;   
//}
