//
//  Stacks.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/10/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "Stacks.h"

void stackInit(Stack *s) {
    s->top = -1;
    
}

int stackIsEmpty(Stack *s){
    if (s->top == -1){
        
        return 1;
    }
    else
        return 0;
    
}

int stackIsFull(Stack *s){
    if (s->top == MAX - 1){
        
        return 1;
    }
    else
        return 0;
    
}

void pushToStack(Stack *s, int element){
    if (stackIsFull(s)) {
        printf("\nStack is full\n");
    }else{
        s->top ++;
        s->element[s->top]=element;
        printf("\nPush element: %d\n", element);
    }
    
}

int popFromStack(Stack *s){
    if (stackIsEmpty(s)) {
        printf("\nStack is empty\n");
        return -1;
    }else{
        int aux = s->element[s->top];
        s->top--;
        printf("\nPop element : %d\n",aux);
        return aux;
    }
}

void printStack(Stack *s) {
    printf("\n");
    for (int i = s->top ; i >= 0; i--) {
        printf("  %d\n",s->element[i]);
    }
    printf("STACK\n");
}

#pragma mark - Double Stack

void doubleStackInit(DoubleStack *ds){
    ds->top1 = -1;
    ds->top2 = MAX;
    
}

int isStackFull(DoubleStack *ds) {
    if (ds->top1 == ds->top2 - 1) {
        return 1;
    }else
        return 0;
}
void pushA(DoubleStack *ds, int element){
    if (isStackFull(ds)) {
        printf("Stack overflow!\n");
    }else {
        ds->top1 ++;
        ds->element[ds->top1] = element;
        printf("Inserted item in stack 1\n");
    }
}

void pushB(DoubleStack *ds, int element){
    if (isStackFull(ds)) {
        printf("Stack overflow!\n");
        return;
    }
    ds->top2--;
    ds->element[ds->top2] = element;
    printf("Inserted item in stack 2\n");
    
}
int popA(DoubleStack *ds){
    if (ds->top1 == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    int aux = ds->element[ds->top1];
    ds->top1--;
    printf("Pop item from Stack1\n");
    return aux;
    
}

int popB(DoubleStack *ds){
    if (ds->top2 == MAX) {
        printf("Stack underflow!\n");
        return -1;
    }
    int aux;
    ds->top2++;
    aux = ds->element[ds->top2];
    printf("Pop item from Stack2\n");
    return aux;
    
}

