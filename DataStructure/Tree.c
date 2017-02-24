//
//  Tree.c
//  DataStructure
//
//  Created by Elangbam, Johnson (J.) on 2/17/17.
//  Copyright © 2017 Elangbam, Johnson (J.). All rights reserved.
//

#include "Tree.h"


BTNode *getNewNode(int data){
    
    BTNode *temp = (BTNode *)malloc(sizeof(BTNode));
    
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

BTNode *insert(BTNode *root, int data) {
    if (root == NULL) {
        root = getNewNode(data);
    }else if (data <= root->data){
        root->left = insert(root->left, data);
    }else
        root->right = insert(root->right, data);
    
    return root;
}

int search(BTNode *root, int data){
    if (root == NULL) {
        return 0;
    }else if (data == root->data){
        return 1;
    }else if (data <= root->data){
        return (search(root->left, data));
    }else
        return (search(root->right, data));
}

void preOrderTraversal(BTNode *root) {
    if (root == NULL)
        return;
    
    printf("%d ",root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void inOrderTraversal(BTNode *root) {
    if (root == NULL)
        return;
    inOrderTraversal(root->left);
    printf("%d ", root->data);
    inOrderTraversal(root->right);
}
void postOrderTraversal(BTNode *root){
    if (root == NULL)
        return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ",root->data);
}



