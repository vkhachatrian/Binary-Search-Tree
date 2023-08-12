#include <iostream>
#include "Utils.h"
#include <string>;
#include <vector>;
#include <initializer_list>
#include "BinarySearchTree.h";

int main()
{
	BinarySearchTree firstTree;

	firstTree.insert(8);
	firstTree.insert(6);
	firstTree.insert(10);
	firstTree.insert(11);

	BinarySearchTree secondTree;
	secondTree.insert(8);
	secondTree.insert(6);
	secondTree.insert(10);
	secondTree.insert(11);

	std::cout << "IsSame: " << Utils::is_same_tree(firstTree.root(), secondTree.root()) << std::endl;

	return 0;
}