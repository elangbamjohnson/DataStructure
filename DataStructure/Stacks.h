//
//  Stacks.h
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/10/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#ifndef Stacks_h
#define Stacks_h

#include <stdio.h>

#define MAX 5

typedef struct {
    int top;
    int element[MAX];
}Stack;

typedef struct{
    int top1;
    int top2;
    int element[MAX];
}DoubleStack;

void stackInit(Stack *s);
int stackIsEmpty(Stack *s);
int stackIsFull(Stack *s);
void pushToStack(Stack *s, int element);
int popFromStack(Stack *s);
void printStack(Stack *s);

void doubleStackInit(DoubleStack *ds);
void pushA(DoubleStack *ds, int element);
void pushB(DoubleStack *ds, int element);
int popA(DoubleStack *ds);
int popB(DoubleStack *ds);
int isStackFull(DoubleStack *s);




#endif /* Stacks_h */
