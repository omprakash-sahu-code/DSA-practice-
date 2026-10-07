#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

class TreeNode{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};

// 1.Preorder 
void preorder(TreeNode* root){
    if(root==nullptr) return;
    cout<< root->data << " -> " ;
    preorder(root->left);
    preorder(root->right);
}

// 2.Postprder
void postorder(TreeNode* root){
    if(root==nullptr) return;
    postorder(root->left);
    cout<< root->data << " -> " ;
    postorder(root->right);
}

// 3.Inorder
void inorder(TreeNode* root){
    if(root==nullptr) return;
    inorder(root->left);
    inorder(root->right);
    cout<< root->data << " -> " ;
}
// 4.Level order 
// 5.Verticle order 




int main(){
    TreeNode* root= new TreeNode(15);
    root->left=new TreeNode(5);
    root->right=new TreeNode(10);
    
    return 0;
}