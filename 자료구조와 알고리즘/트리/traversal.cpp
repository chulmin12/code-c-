#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// 트리를 만들기 위하 Node 구조체 정의
struct Node
{
    char data;
    Node* left;
    Node* right;
    
    Node(char d) : data(d), left(nullptr), right(nullptr) {};
};

// 전위 순회
void preorder(Node* node)
{
    if (node){
        cout << node -> data << ", ";
        preorder(node -> left);
        preorder(node -> right);
    }
}

// 중위 순회
void inorder(Node* node)
{
    if (node){
        inorder(node -> left);
        cout << node -> data << ", ";
        inorder(node -> right);
    }
}

// 후위 순회
void postorder(Node* node)
{
    if (node){
        postorder(node -> left);
        postorder(node -> right);
        cout << node -> data << ", ";
    }
}

// 레벨 순회
void levelorder(Node* node)
{
    queue<Node*> q;
    q.push(node);
    
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        
        cout << curr -> data << ", ";
        
        if (curr -> left)
            q.push(curr -> left);
        if (curr -> right)
            q.push(curr -> right);
    }
}

// 이진 트리 삭제
void delete_tree(Node* node)
{
    if (node)
        delete_tree(node -> left);
        delete_tree(node -> right);
        delete node;
}

int main()
{
    Node* root = nullptr;
    
    root = new Node('A');
    root -> left = new Node('B');
    root -> right = new Node('C');
    root -> left -> left = new Node('D');
    root -> left -> right = new Node('E');
    root -> right -> right = new Node('F');
    
    preorder(root); cout << endl;
    inorder(root); cout << endl;
    postorder(root); cout << endl;
    levelorder(root); cout << endl;
    
    delete_tree(root);
}
