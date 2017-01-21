#include <iostream>
using namespace std;

struct BSTnode {
 int data;
 BSTnode* left;
 BSTnode* right;
};

BSTnode* insert(BSTnode*, int); 
BSTnode* getNewNode(int);
BSTnode* deleteNode(BSTnode*, int);
BSTnode* findMin(BSTnode*);
bool search(BSTnode*, int);
int minVal = -100000000; 

int main(){
   int test, j=0;
   BSTnode* root = NULL;  // Create root ptr pointing to root node 
   root = insert(root, 10);
   root = insert(root, 20);
   root = insert(root, 5);
   root = insert(root, 7);
   root = insert(root, 16);
   cin >> test;
   if(search(root, test)) cout << "Data exists\n"; 
   else cout << "Data not found!\n";

   while (j < 5) {
       //if(search(root, test)) cout << "Data exists\n"; 
       //else cout << "Data not found!\n";

       root = deleteNode(root, 10);
        
       cin >> test; 
       if(search(root, test)) cout << "Data exists\n"; 
       else cout << "Data not found!\n";
       j++;
   }
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

BSTnode* deleteNode(BSTnode* root, int data) {
    if (root == NULL) return root;
    else if (data < root->data) root->left = deleteNode(root->left, data); 
    else if (data > root->data) root->right = deleteNode(root->right, data); 
    else { //found node to be deleted
        if (root->right == NULL && root->left == NULL){  
            delete root;
            root = NULL;
        }
        else if (root->left == NULL) { //1 child delete case
           struct BSTnode* tmp = root;
           root = root->right;
           delete tmp;
        }
        else if (root->right == NULL) {// 1 child right delete case
            struct BSTnode* tmp = root;
            root = root->left;
            delete tmp;
        }
        else{ // 2 child case
           //Find min on right subtree
            struct BSTnode* tmp  = findMin(root->right);
            root->data = tmp->data;
            root->right = deleteNode(root->right, tmp->data); 
        }
        return root;
  }
}

BSTnode* findMin(BSTnode* root) {

    if (root->left == NULL) 
        return root->left;
    else // Keep checking
       return findMin(root->left); 
}





