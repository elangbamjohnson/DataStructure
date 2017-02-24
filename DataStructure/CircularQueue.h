//
//  CircularQueue.h
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/17/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#ifndef CircularQueue_h
#define CircularQueue_h

#include <stdio.h>

#define MAX 5

typedef struct circularQueue {
    int front;
    int rear;
    int element[MAX];
    int count;
} CircularQueue;


int isEmpty(CircularQueue *q);
int isFull(CircularQueue *q);
void insertCirQueue(CircularQueue *q, int item);
int deleteCirQueue(CircularQueue *q);
void displayCirQueue (CircularQueue *q);

#endif /* CircularQueue_h */
