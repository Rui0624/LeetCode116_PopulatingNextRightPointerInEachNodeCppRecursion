//
//  main.cpp
//  LeetCode116_PopulatingNextRightPointerInEachNode
//
//  Created by Rui on 1/21/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
//Definition for binary tree with next pointer.
struct TreeLinkNode {
    int val;
    TreeLinkNode *left, *right, *next;
    TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root)
            return;
        if(root->left)
            root->left->next = root->right;
        if(root->right)
            root->right->next = (root->next ? root->next->left : NULL);
        connect(root->left);
        connect(root->right);
    }
};
