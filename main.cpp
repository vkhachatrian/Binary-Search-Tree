#include <iostream>

#include "BinarySearchTree.h";

int main()
{
    BinarySearchTree bst;

    // Insert elements into the tree
    bst.insert(50);
    bst.insert(30);
    bst.insert(20);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    // Perform various operations on the tree
    std::cout << "Inorder traversal: ";
    bst.inorder();
    std::cout << std::endl;

    std::cout << "Preorder traversal: ";
    bst.preorder();
    std::cout << std::endl;

    std::cout << "Postorder traversal: ";
    bst.postorder();
    std::cout << std::endl;

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
}