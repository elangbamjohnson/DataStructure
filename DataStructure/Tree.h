//
//  Tree.h
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/17/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include <stdio.h>
#include <stdlib.h>

typedef struct BTNode {
    int data;
    struct BTNode *left;
    struct BTNode *right;
    
}BTNode;



BTNode *getNewNode(int data);
BTNode *insert(BTNode *root,int data);
int search(BTNode *root, int data);
void preOrderTraversal(BTNode *root);
void inOrderTraversal(BTNode *root);
void postOrderTraversal(BTNode *root);

#endif /* Tree_h */
