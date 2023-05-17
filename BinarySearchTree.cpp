#include "BinarySearchTree.h"

#include <iostream>
#include <queue>

BinarySearchTree::BinarySearchTree()
	:m_root{}
{
	//createBinaryTree();
}

BinarySearchTree::~BinarySearchTree()
{
	destroyBinaryTree();
}

void BinarySearchTree::createBinaryTree(TreeNode* root)
{
	if (!m_root)
		m_root = root;
	else
		std::cout << "Empty tree already is created!!\n";
}

void BinarySearchTree::inorder_private(TreeNode* root)
{
	if (!root) return;
	inorder_private(root->m_left);
	std::cout << root->data;
	inorder_private(root->m_right);
}

void BinarySearchTree::preorder_private(TreeNode* root)
{
	if (!root) return;
	std::cout << root->data << " ";
	preorder_private(root->m_left);
	preorder_private(root->m_right);
}

void BinarySearchTree::postorder_private(TreeNode* root)
{
	if (!root) return;
	postorder_private(root->m_left);
	postorder_private(root->m_right);
	//std::cout << root->data;
}

TreeNode* BinarySearchTree::search_private(TreeNode* root, int data)
{
	if (root == nullptr || root->data == data) { 
		//std::cout << "Root: " << root->data << "\n";
		return root; }
	else if (data < root->data)
		search_private(root->m_left, data);
	else if (data > root->data)
		search_private(root->m_right, data);
}

bool BinarySearchTree::search(int data)
{
	if (!m_root) return false;
	TreeNode* res = nullptr;
	res = search_private(m_root, data);

	std::cout << res->data;

	if (res == nullptr)
		return false;

	return true;
}

TreeNode* BinarySearchTree::insert_private(TreeNode* root, int data)
{
	if (root == nullptr) {
		TreeNode* node = new TreeNode(data);
		return node;
	}
	else if (data < root->data)
	{
		 root->m_left = insert_private(root->m_left, data);
	}
	else {
		 root->m_right = insert_private(root->m_right, data);
	}

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
	if (!m_root) return -1;
	return m_root->data;
}

void BinarySearchTree::setRootData(int data)
{
	if (!m_root)
	{
		TreeNode* root = new TreeNode(data);
		createBinaryTree(root);
	}
	else
	{
		m_root->data = data;
	}
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
			std::cout << m_root->data << " ";
			stack.push(m_root);
			m_root = m_root->m_left;
		}

		if (stack.empty()) break;

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
	if (!m_root) return;

	std::queue<TreeNode*> queue;

	queue.push(m_root);

	while (!queue.empty())
	{
		TreeNode* currentNode = std::move(queue.front());
		queue.pop();
		std::cout << currentNode->data << " ";
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

int BinarySearchTree::max()
{
	return max_private(m_root);
}

