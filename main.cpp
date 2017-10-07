//
//  main.cpp
//  HeightOfBST
//
//  Created by Sumitha on 6/10/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{
    struct node* node = new struct node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    
    return(node);
}
int treeHeight(struct node* node)
{
    int left_height = 0;
    int right_height = 0;
    if (node==NULL)
        return 0;
    else
    {
        if(node->left != NULL)
            left_height = 1 + treeHeight(node -> left);
        if(node->right != NULL)
            right_height = 1 + treeHeight(node -> right);

        if (left_height > right_height)
            return(left_height);
        else
            return(right_height);
    }
}
int main() {
    
    struct node *root = newNode(9);
    
    root->left = newNode(2);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    cout << "Tree - Height : " << treeHeight(root) << endl;
    return 0;
}
