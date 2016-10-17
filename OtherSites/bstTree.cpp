#include <iostream>
using namespace std;

struct BSTnode {
 int data;
 BSTnode* left;
 BSTnode* right;
};

BSTnode* insert(BSTnode*, int); 
BSTnode* getNewNode(int);
bool search(BSTnode*, int);

int main(){
   int test;
   BSTnode* root = NULL;  // Create root ptr pointing to root node 
   root = insert(root, 10);
   root = insert(root, 20);
   root = insert(root, 5);
   root = insert(root, 7);
   root = insert(root, 16);
   cin >> test;
   if(search(root, test)) cout << "Data exists\n"; 
   else cout << "Data not found!\n";
   return 0;
}

BSTnode* getNewNode(int data){
    BSTnode* newNode = new BSTnode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BSTnode* insert(BSTnode* root, int data) {
    if (root == NULL) {
        root = getNewNode(data);
    } else if (data <= root->data)  {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

bool search(BSTnode* root, int data) {
    if (root == NULL) 
            return false;
    else if (root->data == data) 
            return true;
    else if (data < root->data) 
         return search(root->left, data);
    else 
         return search(root->right, data);
}
