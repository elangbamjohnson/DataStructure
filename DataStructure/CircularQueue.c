//
//  CircularQueue.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/17/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "CircularQueue.h"

void init(CircularQueue *q) {
    
    q->front = 0;
    q->rear = -1;
    q->count = 0;
    
}

int isEmpty(CircularQueue *q){
    if (q->count == 0) {
        return 1;
    }else
        return 0;
}

int isFull(CircularQueue *q) {
    if (q->count == MAX) {
        return 1;
    }else
        return 0;
    
}

void insertCirQueue(CircularQueue *q, int item) {
    if (isFull(q)) {
        printf("\nQueue full!");
    }else{
        if (q->rear == MAX -1) {
            q->rear = 0;
        }else
            q->rear++;
        
        q->element[q->rear] = item;
        q->count++;
    }
    printf("\nQueue inserted!\n");
}

int deleteCirQueue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("\nQueue empty!");
    }else {
        if (q->front == MAX-1) {
            q->front = 0;
        }else
            q->front++;
    }
    
    q->count--;
    printf("\nElement deleted!\n");
    return q->element[q->front];
}

void displayCirQueue (CircularQueue *q) {
    
    int aux, aux1;
    aux  = q->front;
    aux1 = q->count;
    while(aux1>0)
    {
        printf("Element #%d = %d\n", aux, q->element[aux]);
        aux=(aux+1)%MAX;
        aux1--;
    }
    printf("\n");
    
}


