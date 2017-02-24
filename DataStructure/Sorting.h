//
//  Sorting.h
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/10/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#ifndef Sorting_h
#define Sorting_h

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void bubbleSort(int element[]);
void quickSort(int *element, int start, int end);
//int partition(int *element, int start, int end);
void mergeSort(int arr[],int arrCount);
#endif /* Sorting_h */
