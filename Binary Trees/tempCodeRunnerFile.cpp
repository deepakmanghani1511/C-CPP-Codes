#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(node* root) {
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);       // used as line separator

    while(!q.empty()) {

        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            
            cout << endl;

            if(!q.empty())
                q.push(NULL);
        } 
        else {
            cout << temp->data << " ";
        
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
        }
    }
}
  
// cout << endl;

node* buildTree(node* root) {

    cout << "Enter the data: ";
    
    int data;
    cin >> data;
    
    if(data == -1)
        return NULL;

    root = new node(data);

    cout << "Enter the left part of the data: " << endl;
    root->left = buildTree(root->left);

    cout << "Enter the right part of the data: " << endl;
    root->right = buildTree(root->right);

    return root;
}

// cout << endl;

void LevelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << temp->data << " ";
    
        if(temp->left)
            q.push(temp->left);

        if(temp->right)
            q.push(temp->right);
             
    }
}

void Inorder(node* root) {

    node* temp = root;
    
    if(temp == NULL)
        return;

    Inorder(temp->left);
    cout << temp->data << " ";
    Inorder(temp->right);
}

void Preorder(node* root) {

    node* temp = root;
    
    if(temp == NULL)
        return;

    cout << temp->data << " ";
    Preorder(temp->left);
    Preorder(temp->right);
}

void Postorder(node* root) {

    node* temp = root;
    
    if(temp == NULL)
        return;

    Postorder(temp->left);
    Postorder(temp->right);
    cout << temp->data << " ";
}

int main() {

    node* root = NULL;
    
    root = buildTree(root);     

    // with separator i.e. NULL for line escape( op is in level wise acc to the tree)
    cout << "Level Order traversal with separator(line wise)" << endl;
    levelOrderTraversal(root);  
    cout << endl;

    // withot separator i.e. entire op is in a line
    cout << "Level Order traversal without separator" << endl;
    LevelOrderTraversal(root);
    cout << endl << endl;

    // Inorder traversal
    cout << "Inorder traversal" << endl;
    Inorder(root);
    cout << endl << endl;

    // Preorder traversal
    cout << "Preorder traversal" << endl;
    Preorder(root);
    cout << endl << endl;

    // Postorder traversal 
    cout << "Postorder traversal" << endl;
    Postorder(root);
    cout << endl << endl;

    return 0;
}