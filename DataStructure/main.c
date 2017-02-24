//
//  main.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/10/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include <stdio.h>
#include "Stacks.h"
#include "Searching.h"
#include "Sorting.h"
#include "LinkedList.h"
#include "Tree.h"
#include "InterviewProblems.h"
#include "PatternRecognition.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    Stack s;
//    DoubleStack ds;
//    
//    stackInit(&s);
//    doubleStackInit(&ds);
    
//    pushToStack(&s, 1);
//    pushToStack(&s, 2);
//    pushToStack(&s, 3);
//    pushToStack(&s, 4);
//    pushToStack(&s, 5);
//    
//    printStack(&s);
//    
//    popFromStack(&s);
//    popFromStack(&s);
//    popFromStack(&s);
//    printStack(&s);
    
    
//    pushA(&ds, 1);
//    pushA(&ds, 2);
//    pushA(&ds, 3);
   // pushA(&ds, 4);
   // pushA(&ds, 5);
    
//    pushB(&ds, 11);
//    pushB(&ds, 22);
//    pushB(&ds, 33);
//    pushB(&ds, 44);
//    pushB(&ds, 55);
//    pushB(&ds, 66);
//    
//    popA(&ds);
//    pushB(&ds, 44);
//    popB(&ds);
//    pushA(&ds, 4);
//    popA(&ds);
//    popA(&ds);
//    popA(&ds);
//    popA(&ds);
//    popA(&ds);
    
    
    
//    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    
//    quickSort(arr, 0, 9);
//    mergeSort(arr, 10);
    
//    for (int i = 0; i<10; i++) {
//        printf("%d ",arr[i]);
//    }
    
    
//    int pos = binarySearch(arr, 5);
//    
//    printf("Found at pos %d\n",pos);
    
 //   bubbleSort(arr);
//    int n;
//    Node *head = NULL;
    
//    head = insertQueueLinkedList(head, 1);
//    head = insertQueueLinkedList(head, 2);
//    head = insertQueueLinkedList(head, 3);
//    head = insertQueueLinkedList(head, 4);
//    head = insertQueueLinkedList(head, 5);
    
//    head = insertAtBeginning(head, 1);
//    head = insertAtBeginning(head, 2);
//    head = insertAtBeginning(head, 3);
//    head = insertAtBeginning(head, 4);
//    head = insertAtBeginning(head, 5);
    
    
//    head = insertAtPosition(head, 1, 1);
//    head = insertAtPosition(head, 2, 1);
//    head = insertAtPosition(head, 3, 1);
//    head = insertAtPosition(head, 4, 1);
//    head = insertAtPosition(head, 5, 2);
//    printf("LInked list: ");
//    printLinkedListUsingRecursion(head);
//    printf("Reverse: ");
//    printLinkedListReverseUsingRecursion(head);
//    printf("\n");
    
    
//    print(head);
//
//    head = reverseLinkedList(head);
//    printf("Reversed: ");
//    print(head);
    
//    printf("How many nos:");
//    scanf("%d",&n);
//    for (int i = 0; i < n; i++) {
//        printf("Enter the nos:");
//        scanf("%d",&x);
//        head = insertAtBeginning(head, n);
//        print(head);
//    }
    
    
    //divideWithoutUsingDivision(16, 5);
    
    
//    BTNode *root = NULL;
//    
//    root = insert(root, 20);
//    root = insert(root, 10);
//    root = insert(root, 30);
//    
//    printf("Preorder: ");
//    preOrderTraversal(root);
//    printf("\n");
//    printf("Inorder: ");
//    inOrderTraversal(root);
//    printf("\n");
//    printf("Postorder: ");
//    postOrderTraversal(root);
//    printf("\n");
    
    //BFSTraversal(root);
    
//    int n;
//    printf("Enter no to search:");
//    scanf("%d",&n);
//    if ((n = search(root, n))== 1) {
//        printf("Element found\n");
//    }else
//        printf("Not found!\n");
    
//    int array[] = {0,1,72,3,0,5,9,0,6};
    
   // int *unordered = zeroAtBeginning(array, 9);
//    int *ordered = zeroAtBeginningOrdered(array, 9);
    
//    for (int i = 0; i<9; i++) {
//        printf("%d ",unordered[i]);
//    }
    
//    printf("\n");
//    for (int i = 0; i<9; i++) {
//        printf("%d ",ordered[i]);
//    }

    
//    char a[100], b[100];
//    int position;
//    
//    printf("Enter some text\n");
//    gets(a);
//    
//    printf("Enter a string to find\n");
//    gets(b);

    char *a = "tuna tuna";
    char *b = "tuna";
    
    int position = match(a, b);
    
    if(position!=-1)
        printf("Found at location %d\n", position+1);
    else
        printf("Not found.\n");
 
    
    
    
    
    return 0;
}




