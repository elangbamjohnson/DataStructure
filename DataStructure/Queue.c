//
//  Queue.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/23/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "Queue.h"

#define MAX 5

typedef struct queue {
    int front;
    int rear;
    int element[MAX];
    
}Queue ;


void init(Queue *q) {
    
    q->front = 0;
    q->rear = -1;
    
}

int isEmpty(Queue *q){
    if (q->front == q->rear + 1 )
        return 1;
    else
        return 0;
    
}

int isFull(Queue *q) {
    if (q->rear == MAX - 1)
        return 1;
    else
        return 0;
}

void insertQueue(Queue *q, int item) {
    if (isFull(q)) {
        printf("\nQueue full!");
        
    }else{
        q->rear = q->rear + 1;
        q->element [q->rear] = item;
        printf("\nElement inserted!");
    }
}

int deleteQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("\nQueue empty!");
        return -1;
    }else {
        int temp = q->element[q->front];
        q->front ++;
        printf("\nElement deleted!");
        return temp;
    }
}
void displayQueue (Queue *q) {
    printf("\nQueue");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d",q->element[i]);
    }
    printf("\n");
}

