#include "BinarySearchTree.h"

#include <iostream>
#include <queue>

BinarySearchTree::BinarySearchTree()
	: m_root{}
{
}

BinarySearchTree::~BinarySearchTree()
{
	destroyBinaryTree();
}

void BinarySearchTree::inorder_private(TreeNode* root)
{
	if (!root) return;
	inorder_private(root->m_left);
	inorder_private(root->m_right);
}

void BinarySearchTree::preorder_private(TreeNode* root)
{
	if (!root) return;
	preorder_private(root->m_left);
	preorder_private(root->m_right);
}

void BinarySearchTree::postorder_private(TreeNode* root)
{
	if (!root) return;
	postorder_private(root->m_left);
	postorder_private(root->m_right);
}

TreeNode* BinarySearchTree::search_private(TreeNode* root, int data)
{
	if (root == nullptr || root->data == data) 
		return root;
	else if (data < root->data)
		search_private(root->m_left, data);
	else if (data > root->data)
		search_private(root->m_right, data);

	return nullptr;
}

bool BinarySearchTree::searchData(int data)
{
	if (!m_root) 
		return false;

	TreeNode* res = search_private(m_root, data);
	return res == nullptr;
}

TreeNode* BinarySearchTree::insert_private(TreeNode* root, int data)
{
	if (root == nullptr)
		return new TreeNode(data);
	
	if (data < root->data)
		root->m_left = insert_private(root->m_left, data);
	else
		root->m_right = insert_private(root->m_right, data);

	return root;
}

int BinarySearchTree::max_private(TreeNode* root)
{
	int root_val, left, right, max = INT_MIN;

	if (root)
	{
		root_val = root->data;
		left = max_private(root->m_left);
		right = max_private(root->m_right);

		if (left > right)
			max = left;
		else
			max = right;

		if (root_val > max)
			max = root_val;
	}
	return max;
}

void BinarySearchTree::destroyBinaryTree()
{
	if (!m_root) return;
	postorder_private(m_root->m_left);
	postorder_private(m_root->m_right);

	delete m_root;
	m_root = nullptr;
}

bool BinarySearchTree::isEmpty()
{
	return m_root == nullptr;
}

int BinarySearchTree::getRootData()
{
	return m_root ? m_root->data : INT_MIN;
}

void BinarySearchTree::setRootData(int data)
{
	if (!m_root)
		m_root = new TreeNode(data);
	else
		m_root->data = data;
}

void BinarySearchTree::preorder()
{
	preorder_private(m_root);
}

void BinarySearchTree::preorderIter()
{
	std::stack<TreeNode*> stack;

	while (true)
	{
		while (m_root)
		{
			stack.push(m_root);
			m_root = m_root->m_left;
		}

		if (stack.empty()) 
			break;

		m_root = stack.top();
		stack.pop();
		m_root = m_root->m_right;
	}
}

void BinarySearchTree::postorder()
{
	postorder_private(m_root);
}

void BinarySearchTree::inorder()
{
	inorder_private(m_root);
}

void BinarySearchTree::levelOrder()
{
	if (!m_root)
		return;

	std::queue<TreeNode*> queue;

	queue.push(m_root);

	while (!queue.empty())
	{
		TreeNode* currentNode = std::move(queue.front());
		queue.pop();
		if (currentNode->m_left)
			queue.push(currentNode->m_left);
		if (currentNode->m_right)
			queue.push(currentNode->m_right);
	}
}

void BinarySearchTree::insert(int data)
{
	m_root = insert_private(m_root, data);
}

TreeNode* BinarySearchTree::root() const
{
	return m_root;
}

int BinarySearchTree::max()
{
	return max_private(m_root);
}