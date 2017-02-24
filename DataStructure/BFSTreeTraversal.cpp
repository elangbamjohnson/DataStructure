//
//  BFSTreeTraversal.cpp
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/23/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "BFSTreeTraversal.hpp"
#include <queue>

using namespace std;



BTreeNode *getNode(int data){
    
    BTreeNode *newNode = (BTreeNode*)malloc(sizeof(BTreeNode));
    
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
    
}

BTreeNode *insertBTree(BTreeNode *root, int data){
    
    
    
    if (root == NULL) {
        root = getNode(data);
        
    }else if (data < root->data){
        root->left = insertBTree(root->left, data);
        
    }else if (data > root->data){
        root->right = insertBTree(root->right, data);
    }
    
    return root;
    
    
}

void BFSTraversal(BTreeNode *root){
    
    if (root == NULL) {
        return;
    }
    
    queue <BTreeNode*> Q;
    Q.push(root);
    
    while (!Q.empty()) {
        BTreeNode *current = Q.front();
        printf("%d ",current->data);
        if (current->left != NULL)
            Q.push(current->left);
        
        if (current->right != NULL)
            Q.push(current->right);
        
        Q.pop();
    }
    
}


int search(BTreeNode *root, int data){
    if (root == NULL)
        return -1;
    else if (data == root->data) {
        return 1;
    }else if (data <= root->data) {
       return (search(root->left, data));
    }else {
       return (search(root->right, data));
   }
    
}
