//
//  Searching.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/10/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "Searching.h"

#define SIZE 5

int binarySearch(int element[], int item) {
    int low = 0;
    int mid = 0;
    int pos = -1;
    int high = SIZE - 1;
    
    while (low <= high) {
        mid = (low + high)/2;
        if (element[mid] == item) {
            pos = mid;
            break;
        
        }else if (item < element[mid]) {
            high = mid - 1;
        }else {
            low = mid + 1;
            
        }
        
    }
    return pos;
}
