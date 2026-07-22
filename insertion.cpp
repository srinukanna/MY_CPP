#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
node *insert(node *root,int value){
    if(root == nullptr){
        return new node(value);
    }
    if(value<root->data){
        root->left = insert(root->left,value);
    }
    else{
        root->right = insert(root->right,value);
    }
    return root;
}

int main(){
    node *root = new node(10);
    root = new node(5);
    root = new node(15);
}