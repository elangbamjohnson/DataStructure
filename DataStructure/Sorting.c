//
//  Sorting.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/10/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "Sorting.h"

void bubbleSort(int element[]) {
    
    for (int i = 0; i < MAX; i++) {
        printf(" %d",element[i]);
    }
    int aux;
    
    for (int i = 0; i < MAX; i++) {
        for (int j = 0 ; j < MAX-i-1; j++) {
            if (element[j] > element[j+1]){
                aux = element[j];
                element[j] = element[j+1];
                element[j+1] = aux;
            }
            
        }
        
    }
    printf(" \n");
    
    for (int i = 0; i < MAX; i++) {
        printf(" %d",element[i]);
    }
    printf(" \n");
    
}

#pragma mark - Quick sort

 int partition(int *arr, int start, int end) {
     int pivot = arr[end];
     int partitionIndex = start;
     
     for (int i = start; i < end; i++) {
         if (arr[i] <= pivot ) {
             
             int aux = arr[i];
             arr[i] = arr[partitionIndex];
             arr[partitionIndex] = aux;
             partitionIndex++;
         }
     }
     
     int aux = arr[partitionIndex];
     arr[partitionIndex] = arr[end];
     arr[end] = aux;
     
     return partitionIndex;
     
}

void quickSort(int *arr, int start, int end){
    
    if (start < end) {
        int partitionIndex = partition(arr, start, end);
        quickSort(arr, start, partitionIndex - 1);
        quickSort(arr, partitionIndex +1, end);
    }
    
   
}


#pragma mark - Merge sort



void merge(int *arr, int *leftArr, int *rightArr, int leftCount, int rightCount){
    int i = 0;
    int j = 0;
    int k = 0;
    
    while (i < leftCount && j < rightCount) {
        if (leftArr[i] < rightArr[j]) {
            arr[k++] = leftArr[i++];
        }else
            arr[k++] = rightArr[j++];
    }
    
    while (i < leftCount)
        arr[k++] = leftArr[i++];
    while (j < rightCount)
        arr[k++] = rightArr[j++];
    
    
}

void mergeSort(int *arr, int arrCount){
    
    if (arrCount < 2) {
        return;
    }
    int *leftArr;
    int *rightArr;
    int midIndex = arrCount/2;
    
    leftArr = (int *)malloc(midIndex * sizeof(int));
    rightArr = (int *)malloc((arrCount - midIndex) * sizeof(int));
    
    for (int i = 0; i < midIndex; i++)
        leftArr[i] = arr[i];
    for (int i = midIndex; i < arrCount; i++)
        rightArr[i - midIndex] = arr[i];
    
    mergeSort(leftArr, midIndex);
    mergeSort(rightArr, arrCount - midIndex);
    merge(arr, leftArr, rightArr, midIndex, arrCount - midIndex);
    
    
    
}









































