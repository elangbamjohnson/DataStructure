//
//  BFSTreeTraversal.hpp
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/23/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//



#include <stdio.h>
#include <stdlib.h>

typedef struct BTreeNode {
    int data;
    struct BTreeNode *left;
    struct BTreeNode *right;
} BTreeNode;

void BFSTraversal(BTreeNode *root);
BTreeNode *getNode(int data);
BTreeNode *insertBTree(BTreeNode *root, int data);
int searchBTree(BTreeNode *root, int data);


