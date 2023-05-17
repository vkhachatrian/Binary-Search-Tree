#include <iostream>
import <string>;
import <vector>;
import <initializer_list>;

import "BinarySearchTree.h";


int main()
{
	BinarySearchTree tree;

	tree.insert(8);
	tree.insert(6);
	tree.insert(10);
	tree.insert(5);
	tree.insert(7);
	tree.insert(12);
	tree.insert(9);
	tree.insert(20);

	
	tree.levelOrder();



	return 0;
}