#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

void inorder(struct node* root) {
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
}

struct node* createnode(int num) {
    struct node* root = malloc(sizeof(struct node));
    root->data=num;
    root->left=NULL;
    root->right=NULL;

    return root;
}

struct node* insertleft(struct node* root, int num) {
    root->left=createnode(num);
    
    return root->left;
}

struct node* insertright(struct node* root, int num) {
    root->right=createnode(num);
    
    return root->right;
}

int main() {
    struct node* root = createnode(1);
    insertleft(root, 2);
    insertright(root, 3);
    insertleft(root->left, 4);

    inorder(root);
    
    

}