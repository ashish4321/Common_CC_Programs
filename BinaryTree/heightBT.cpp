// Program that finds height of a node in binary tree

#include <iostream>
#include <algorithm>

struct node {
    int value;
    node* left;
    node* right;

    node(int myVal){
        value = myVal;
        this->left = NULL;
        this->right = NULL;
    }
};

int heightBT(node* head){
    if(head == NULL){
        return -1;
    }
    return std::max(heightBT(head->left),  heightBT(head->right)) + 1;
}

int main() {
    node* myNode = new node(1);
    node* myNode2 = new node(2);
    node* myNode3 = new node(3);
    node* myNode4 = new node(4);
    myNode->left = myNode2;
    myNode->right = myNode3;
    myNode->left->right = myNode4;

    std::cout << "Height of node is: " << heightBT(myNode);

    return 0;
}
