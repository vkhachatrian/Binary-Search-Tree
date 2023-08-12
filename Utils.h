#pragma once

#include "BinarySearchTree.h"

namespace Utils {

	bool is_same_tree(TreeNode* firstTreeRoot, TreeNode* secondTreeRoot)
	{
		bool isLeftSame = false;
		bool isRightSame = false;

		//std::cout << firstTreeRoot->data << std::endl;
		//std::cout << secondTreeRoot->data << std::endl;

		if (!firstTreeRoot && !secondTreeRoot) {
			return true;
		}

		// If only one tree is empty, they are not the same
		if (!firstTreeRoot || !secondTreeRoot) {
			return false;
		}

		// Check if the data in the current nodes is the same
		if (firstTreeRoot->data != secondTreeRoot->data) {
			return false;
		}

		return is_same_tree(firstTreeRoot->m_left, secondTreeRoot->m_left) &&
			is_same_tree(firstTreeRoot->m_right, secondTreeRoot->m_right);
	}
}
