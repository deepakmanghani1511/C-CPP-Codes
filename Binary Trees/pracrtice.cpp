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

node* buildTree(node* root) {
    // Very first we create a node 
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    if(data == -1)  
        return NULL;
    root = new node(data);
    // after creating the root node we create its child  
    // so we assign the child address using recursion for the root i.e. in root->left and root->right 
    // in the same manner we assign the child address of the childs root->left and root->right
    // i.e.
    
    cout << "Enter the left part " << endl;
    root->left = buildTree(root->left);
    
    cout << "Enter the right part " << endl;
    root->right = buildTree(root->right);

    return root;
}

void LevelOrderTraversal(node* root) {

    vector<int> v;  // In case to store the values

    queue<node*> q;
    q.push(root);

    while(!q.empty()) {

        node* temp = q.front(); // points the front of queue everytime because we will print the front then pop it in order to push the left and the right child for to print the ith level wise.
        
        q.pop();

        v.push_back(temp->data);

        cout << temp->data << " ";

        if(temp->left!=NULL)
            q.push(temp->left);

        if(temp->right!=NULL)
            q.push(temp->right);
    }
}

void levelOrderTraversal(node* root) {

    vector<vector<<int>> ans;  // In case to store the values
    vector<int> v;

    queue<node*> q;

    q.push(root);
    q.push(NULL);   // I used NULL beacuse solving arrays ques and LL ques we need something that can be a i value for to point or break. Here I used NULL whenever we got NULL we will print a line to maintain the sequence

    while(!q.empty()) {

        node* temp = q.front();        

        q.pop();
    
        if(temp == NULL) {
            
            cout << endl;

            ans.push_back(v);

            v.erase(v.begin(), v.end());    // or v.clear();

            if(!q.empty())  // if queue is empty then no need to push NULL it its you should push NULL
                q.push(NULL);
        }

        else {
            
            v.push_back(temp->data);

            cout << temp->data << " ";
            
            if(temp->left != NULL)
                q.push(temp->left);

            if(temp->left != NULL)
                q.push(temp->right);
            }
    }   
}

void preorder(node* root) {

    node* temp = root;
    
    if(temp == NULL)
        return;
    cout << temp->data << " ";
    preorder(temp->left);
    preorder(temp->right); 
}


void PostOrder(node* root, vector<int> &postOrder) {
    
    if(root == NULL)
        return;

    PostOrder.push_back(root->data);
    PostOrder.push_back(root->left, postOrder);
    PostOrder.push_back(root->right, postOrder);
}

void InOrder(node* root, vector<int> &inOrder) {
    
    if(root == NULL)
        return;

    inOrder.push_back(root->data);
    InOrder.push_back(root->left, inOrder);
    InOrder.push_back(root->right, inOrder);
}

void postorder(node* root) {
    node* temp = root;
    if(temp == NULL)
        return NULL;
    postorder(temp->left);
    postorder(temp->right);
    cout << temp->data << " "; 
}

void inorder(node* root) {
    node* temp = NULL;
    if(temp == NULL)
        return NULL;
    inorder(temp->left);
    cout << temp->data << " ";
    inorder(temp->right);
}

int main() {
    // We create a root pointer of node type in static memory using user defined node class and create a function that will creates entire tree in dynamic memory and returns to the root that means root pointer from static memory points the binary that is created in dynamic memory    
    node* root = NULL;
    root = buildTree(root);   
 
    // level order traversal in a line without separator
    LevelOrderTraversal(root);
    cout << endl << endl;
    
    // level order traversal in a line with separator i.e. NULL
    levelOrderTraversal(root);
    cout << endl << endl;
    
    // N is Mid that we have to print

    // N L R
    preorder(root); 
    cout << endl << endl;

    // L R N
    postorder(root);
    cout << endl << endl;

    // L N R
    inorder(root);
    cout << endl << endl;


    // to get stored values

    PreOrder(root);
    PostOrder(root);
    InOrder(root);


    return 0;
}