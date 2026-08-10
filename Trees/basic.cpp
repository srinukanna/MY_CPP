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

int main(){
node *root = new node(10);
root->left = new node(15);
root->right = new node(20);

cout<<"root->data:"<<root->data<<endl;
cout<<"root->left->data:"<<root->left->data<<endl;
cout<<"root->right->data:"<<root->right->data<<endl;
}


