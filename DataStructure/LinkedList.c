//
//  LinkedList.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/13/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "LinkedList.h"

//Pring linkedlist in recursive method
void printLinkedListUsingRecursion(Node *head) {
    if (head == NULL)
        return;
    
    printf("%d ",head->data);
    printLinkedListUsingRecursion(head->next);
    printf("\n ");
}

void printLinkedListReverseUsingRecursion(Node *head) {
    
    if (head == NULL)
        return;
    printLinkedListReverseUsingRecursion(head->next);
    printf("%d ",head->data);
    
    
}
//Insert node at the beginning. This is similar to implementation of insertion element to a stack using linked list.

Node* insertAtBeginning (Node *head, int x) {
    Node *temp = (Node*)malloc(sizeof(Node));
    
    temp->data = x;
    temp->next = NULL;
    
    if (head != NULL) {
        temp->next = head;
    }
    head = temp;
    return head;
}

//Insert item at the end. This is similar to insertion of item at queue using linked list.

Node *insertQueueLinkedList(Node *head, int item){
    Node *temp1 = (Node*)malloc(sizeof(Node));
    
    temp1->data = item;
    temp1->next = NULL;
    
    if (head == NULL) {
        head = temp1;
        return head;
    }
    
    Node *temp2 = head;
    
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }
    
    temp2->next = temp1;
    return head;
    
    
}


//Insert node at the nth position
Node *insertAtPosition(Node *head, int x, int position){
    
    Node *temp1 = (Node *)malloc(sizeof(Node*));
    temp1->data = x;
    temp1->next = NULL;
    
    if (position == 1){
        
        temp1->next = head;
        head = temp1;
        return head;
    }
    Node *temp2 = head;
    int i = 0;
    while (i < position - 2) {
        temp2 = temp2->next;
        i++;
        
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    return head;
    
}
//Print a linked list
void print (Node *head) {
    
    while (head != NULL) {
        printf("%d ",head->data);
        head = head->next;
    }
    
    printf("\n");
    
}

//Reverse a linked list
Node *reverseLinkedList(Node *head) {
    Node *prev = NULL;
    Node *current = head;
    Node *next = head;
    
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}




void divideWithoutUsingDivision(int divident, int divisor) {
    int i = 0;
    while (divident >= divisor) {
        divident = divident - divisor;
        i++;
    }
    
    printf("Quotient : %d\n",i);
    printf("Remainder :%d\n",divident);
    
}


