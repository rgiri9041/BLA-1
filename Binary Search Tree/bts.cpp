#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insertHelper(Node* current, int value, bool& inserted) {
    if (current == nullptr) {
        inserted = true;
        return new Node(value);
    }
    if (value < current->data) {
            current->left = insertHelper(current->left, value, inserted);
    }

    else if (value > current->data) {
            current->right = insertHelper(current->right, value, inserted);
    }

    else{
        inserted = false;
    }
    return current;
}
// for indoder
void inorderHelper(Node* current) {
        if (current == nullptr) return;
        inorderHelper(current->left);
        cout << current->data << " ";
        inorderHelper(current->right);
}

//for Preorder

void preorderHelper(Node* current) {
        if (current == nullptr) return;
        cout << current->data << " ";
        preorderHelper(current->left);
        preorderHelper(current->right);
}

//Postorder
void postorderHelper(Node* current) {
        if (current == nullptr) return;
        postorderHelper(current->left);
        postorderHelper(current->right);
        cout << current->data << " ";
}

class bts {
    Node* root;

public:
bts() : root(nullptr) {}

    bool insert(int value) {
        bool inserted = false;
        root = insertHelper(root, value, inserted);
        if(inserted){
            cout << "Inserted: " << value << endl;
        } else {
            cout << "Value " << value << " already exists in the tree." << endl;
        }
    }

    void inorder() {
        cout << "Inorder Traversal: ";
        inorderHelper(root);
        cout << endl;
    }

    void preorder() {
        cout << "Preorder Traversal: ";
        preorderHelper(root);
        cout << endl;
    }

    void postorder() {
        cout << "Postorder Traversal: ";
        postorderHelper(root);
        cout << endl;
    }
};

int main(){

    bts b;
    cout << "Inserting values into the binary search tree:" << endl;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    int size = sizeof(values) / sizeof(values[0]);

    cout << "Original value: ";
    for(int i = 0; i < size; i++){
        cout << values[i] << " ";
    }
    cout << endl;

    cout << " inserting into the binary search tree:" << endl;
    for(int i = 0; i < size; i++){
        b.insert(values[i]);
    }
    cout << endl << endl;

    cout << "Performing traversals on the binary search tree:" << endl;
    b.inorder();
    b.preorder();
    b.postorder();
    cout << endl;
    return 0;

}