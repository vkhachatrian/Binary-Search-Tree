#include <iostream>

#include "BinarySearchTree.h";

int main()
{
<<<<<<< .mine
    BinarySearchTree bst;
=======
	BinarySearchTree firstTree;
>>>>>>> .theirs

<<<<<<< .mine
    // Insert elements into the tree
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);
=======
	firstTree.insert(8);
	firstTree.insert(6);
	firstTree.insert(10);
	firstTree.insert(11);




>>>>>>> .theirs

<<<<<<< .mine
    // Perform various operations on the tree
    std::cout << "Inorder traversal: ";
    bst.inorder();
    std::cout << std::endl;
=======




>>>>>>> .theirs

<<<<<<< .mine
    std::cout << "Preorder traversal: ";
    bst.preorder();
    std::cout << std::endl;
=======
	firstTree.printTree();
	std::cout << std::endl;

>>>>>>> .theirs

    std::cout << "Postorder traversal: ";
    bst.postorder();
    std::cout << std::endl;

<<<<<<< .mine
    std::cout << "Level-order traversal: ";
    bst.levelOrder();
    std::cout << std::endl;

    std::cout << "Maximum value in the tree: " << bst.max() << std::endl;

    int data = 40;
    if (bst.searchData(data))
        std::cout << data << " found in the tree." << std::endl;
    else
        std::cout << data << " not found in the tree." << std::endl;

    return 0;



=======

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
>>>>>>> .theirs
}