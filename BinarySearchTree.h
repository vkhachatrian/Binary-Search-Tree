#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <vector>
#include <stack>

struct TreeNode {
    int data;
    TreeNode* m_left;
    TreeNode* m_right;
    TreeNode(int data = 0, TreeNode* left = nullptr, TreeNode* right = nullptr)
    {
        this->data = data;
        this->m_left = left;
        this->m_right = right;
    }
};

class BinarySearchTree
{

public:
	explicit BinarySearchTree();
	~BinarySearchTree();

    void destroyBinaryTree();
    bool isEmpty();
    int  getRootData();
    void setRootData(int data);
    void preorder();    // uxix
    void preorderIter();
    void postorder();   // simetric
    void inorder();     // hakadarc
    void levelOrder();
    void insert(int data);
    TreeNode* root() const;
    int max();

    bool search(int data);

private:
    void createBinaryTree(TreeNode* root = nullptr); // creates empty binary tree

    void inorder_private(TreeNode* root);
    void preorder_private(TreeNode* root);
    void postorder_private(TreeNode* root);
    TreeNode* search_private(TreeNode* root, int data);
    TreeNode* insert_private(TreeNode* root, int data);

    int max_private(TreeNode* root);


    TreeNode* m_root;
};

#endif

