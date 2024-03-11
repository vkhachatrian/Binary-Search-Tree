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

    //traversals
    void preorder();
    void postorder();   
    void inorder();
    void levelOrder();

    //traversals iterative approach
    void preorderIter();


    void insert(int data);
<<<<<<< .mine
    void setRootData(int data);
    int  getRootData();
=======
    TreeNode* root() const;

>>>>>>> .theirs
    int max();
    bool find(int data);
    void printTree();

<<<<<<< .mine
    bool isEmpty();
    bool searchData(int data);

=======



>>>>>>> .theirs
private:
<<<<<<< .mine
    void destroyBinaryTree();
=======
    void createBinaryTree(TreeNode* root = nullptr); // creates empty binary tree
>>>>>>> .theirs
    void inorder_private(TreeNode* root);
    void preorder_private(TreeNode* root);
    void postorder_private(TreeNode* root);
    TreeNode* search_private(TreeNode* root, int data);
    TreeNode* insert_private(TreeNode* root, int data);
    int max_private(TreeNode* root);

    TreeNode* m_root;
};

#endif // BINARYSEARCHTREE_H

