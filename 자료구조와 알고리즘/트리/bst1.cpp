#include <iostream>
#include <vector>

using namespace std;

// 트리를 만들기 위한 Node 구조체
struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

//
class BinarySearchTree
{
private:
    Node* root = nullptr;

public:
    // 소멸자부분에서는 전체 트리를 삭제하는 코드
    ~BinarySearchTree()
    {
        delete_tree(root);
    }
    
    // 새로운 데이터 추가하는 코드
    void insert(int value)
    {
        if (!root)
            root = new Node(value);
        else
            insert_impl(root, value);
    }

    // 특정 데이터를 찾는 코드
    Node* find(int value)
    {
        return find_impl(root, value);
    }

    // 중위순회 방식으로 방문하면서 각각의 데이터값들을 출력하는 코드
    void inorder()
    {
        inorder_impl(root);
    }

private:
    void insert_impl(Node* curr, int value)
    {
        if (value < curr->data) {
            if (!curr->left)
                curr->left = new Node(value);
            else
                insert_impl(curr->left, value);
        } else {
            if (!curr->right)
                curr->right = new Node(value);
            else
                insert_impl(curr->right, value);
        }
    }

    
    Node* find_impl(Node* curr, int value)
    {
        if (curr == nullptr)
            return nullptr;

        if (value == curr->data)
            return curr;
        else {
            if (value < curr->data)
                return find_impl(curr->left, value);
            else
                return find_impl(curr->right, value);
        }
    }

    void inorder_impl(Node* curr)
    {
        if (curr) {
            inorder_impl(curr->left);
            std::cout << curr->data << ", ";
            inorder_impl(curr->right);
        }
    }

    void delete_tree(Node* node)
    {
        if (node) {
            delete_tree(node->left);
            delete_tree(node->right);
            delete node;
        }
    }
};

int main()
{
    // 트리 생성
    BinarySearchTree bst;
    bst.insert(10);
    bst.insert(14);
    bst.insert(5);
    bst.insert(7);
    bst.insert(18);
    bst.insert(4);
    bst.insert(6);
    bst.insert(20);
    bst.insert(16);
    bst.inorder(); cout << endl;

    // 생성된 트리에서 특정 데이터 탐색
    if (bst.find(7))
        cout << "7 is found" << endl;
    else
        cout << "7 is not found" << endl;

    if (bst.find(15))
        cout << "15 is found" << endl;
    else
        cout << "15 is not found" << endl;

    // 생성된 트리에 데이터 추가
    bst.insert(9);
    bst.insert(12);
    bst.inorder(); cout << endl;
}
