#include <iostream>

#include "BinarySearchTree.h";


int main()
{
	BinarySearchTree firstTree;

	firstTree.insert(8);
	firstTree.insert(6);
	firstTree.insert(10);
	firstTree.insert(11);


	firstTree.printTree();
	std::cout << std::endl;



	BinarySearchTree secondTree;
	secondTree.insert(1);
	secondTree.insert(2);
	secondTree.insert(3);
	secondTree.insert(4);
	secondTree.insert(5);
	secondTree.insert(6);
	secondTree.insert(7);


	secondTree.printTree();



	return 0;
}