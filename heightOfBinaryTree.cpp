#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
// How our tree looks like:
        //             1
        //          /     \
        //         2       3
        //       /   \     / \
        //      4     5   6   7
        //     /   
        //    8    
// how is recurrsion working here
// l height me call lgegi repeatedly jab tak 8 tak phochega and 8 will return 0
// l reight me call lgegi repeatedly jab tak 7 ya 6 tak phochega and they will return 0
// then previous function will return 1 + max(lheight,rheight) till we reach back to root and all function calls will end
// dono ke max me se call back lgega with + 1;
// root null hote hi recurrsion end hojyega

int height(Node *root)
{
    if (root == NULL) return 0;
    int lheight = height(root->left);
    int rheight = height(root->right);
    return 1 + max(lheight,rheight);
}

int main()
{
    /*Write your code here*/
    Node *head = new Node(1);
    head->left = new Node(2);
    head->right = new Node(3);
    head->left->left = new Node(4);
    head->left->right = new Node(5);
    head->right->left = new Node(6);
    head->right->right = new Node(7);
    head->left->left->left = new Node(8);

    cout << height(head);
    return 0;
}