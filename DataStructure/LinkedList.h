//
//  LinkedList.h
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/13/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    
}Node;

void printLinkedListUsingRecursion(Node *head);
void printLinkedListReverseUsingRecursion(Node *);

Node *insertQueueLinkedList(Node *head, int item);
                      
Node *reverseLinkedList(Node *head);
Node *insertAtPosition(Node *head, int x, int position);
Node* insertAtBeginning(Node *head, int x);
void print (Node *head);
void divideWithoutUsingDivision(int divident, int divisor);

#endif /* LinkedList_h */
