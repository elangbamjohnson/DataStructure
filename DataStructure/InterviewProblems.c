//
//  InterviewProblems.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/17/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "InterviewProblems.h"

int *zeroAtBeginning(int *arr, int length) {
    
    int dest = 0;
    for (int source = 0; source < length; source++) {
        if (arr[source] == 0) {
            arr[source] = arr[dest];
            arr[dest] = 0;
            dest++;
        }
    }
    return arr;
}

int *zeroAtBeginningOrdered(int *arr, int length) {
    int dest = length - 1;
    int source = length - 1;
    
    while (source >= 0) {
        if (arr[source] != 0) {
            arr[dest] = arr[source];
            dest--;
        }
        source--;
    }
    
    while (dest >= 0) {
        arr[dest] = 0;
        dest--;
    }
    
    return arr;
    
}

void divideWithoutDivision (int divident, int divisor){
    int count = 0;
    
    while (divident >= divisor) {
        divident = divident - divisor;
        count++;
    }
    printf("Quotient: %d\n Remainder: %d",divident, count);
    
    
}



