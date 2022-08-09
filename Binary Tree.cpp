#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;              // Initialization of node at right and left
    struct Node* right;                 // side
    
    Node(int value)
    {
        data=value; 
        left = NULL;
        right = NULL;
    }

};

int main() 
{
    struct Node* root = new Node(1);    //psrent node value
    root->left = new Node(2);      //left side Node
    root->right = new Node (4);     // right side Node
    return 0;
}
