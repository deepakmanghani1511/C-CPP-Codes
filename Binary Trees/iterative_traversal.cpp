#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* left = NULL;
        node* right = NULL;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root) {
    
    cout << "Enter the data :" << endl;
    
    int data;
    cin >> data;
    
    if(data == -1)
        return NULL;
    
    root = new node(data);

    cout << "Enter the left part " << endl;
    root->left = buildTree(root->left);

    cout << "Enter the right part " << endl;
    root->right = buildTree(root->right);

    return root;
}

void LevelOrderTraversal(node* root) {

    queue<node*> q;
    q.push(root);
    q.push(NULL);

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

void Iterative1PreOrder(node* root) {

    stack<node*> st;
    st.push(root);

    while(!st.empty()) {
        
        node* temp = st.top();
        st.pop();

        cout << temp->data << " ";

        if(temp->right != NULL)
            st.push(temp->right);

        if(temp->left != NULL)
            st.push(temp->left); 
    }
}

void Iterative2PreOrder(node* root) {

    queue<node*> q;
    q.push(root);
    stack<node*> st;

    while(!q.empty()) {

        node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if(temp->left != NULL) 
            q.push(temp->left);

        if(temp->right != NULL)
            st.push(temp->right);

        if(temp->left == NULL && temp->right == NULL) {
            q.push(st.top());
            st.pop();
        }
    }

}
 

int main() {

    node* root = NULL;
    root = buildTree(root);

    LevelOrderTraversal(root);
    cout << endl;

    // The only diff between 02 approaches is 1st use stack only that inserts root first then root->right after that root->left so left pints first and right in last  
    // 2nd approach use queue and stack where stack contains right elements and gives to queue one by one when temp reaches at leaf node and queue contains left elements

    Iterative1PreOrder(root);
    cout << endl;

    Iterative2PreOrder(root);
    cout << endl;

    return 0;
}