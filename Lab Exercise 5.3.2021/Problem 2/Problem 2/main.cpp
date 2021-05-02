//Lab Exercise 5/3/2021 Problem 2
//Author: nmessa
//This program tests the BinaryTree template class

#include <iostream>
#include <string>
#include "BinaryTree.h"
using namespace std;

int main()
{
	BinaryTree<double> tree;
	tree.insertNode(23.5);
	tree.insertNode(17.8);
	tree.insertNode(92.4);
	tree.insertNode(2.3);
	tree.insertNode(17.2);
	tree.insertNode(54.7);
	tree.insertNode(11.8);
	tree.insertNode(34.6);
	tree.insertNode(45.2);
	tree.insertNode(1.7);
	tree.displayInOrder();
	tree.displayPostOrder();
	tree.displayPreOrder();
	tree.remove(54.7);
	tree.remove(17.8);
	tree.displayInOrder();
	tree.displayPostOrder();
	tree.displayPreOrder();



	BinaryTree<string> tree2;
	tree2.insertNode("Fred");
	tree2.insertNode("Alice");
	tree2.insertNode("Mary");
	tree2.insertNode("Jason");
	tree2.insertNode("Karl");
	tree2.insertNode("Alex");
	tree2.insertNode("Connor");
	tree2.insertNode("Conor");
	tree2.insertNode("Mark");
	tree2.insertNode("William");
	tree2.displayInOrder();
	tree2.displayPostOrder();
	tree2.displayPreOrder();
	tree2.remove("Karl");
	tree2.remove("Mary");
	tree2.displayInOrder();
	tree2.displayPostOrder();
	tree2.displayPreOrder();
	return 0;
}

//Output
//The tree in order
//1.7
//2.3
//11.8
//17.2
//17.8
//23.5
//34.6
//45.2
//54.7
//92.4
//
//The tree post-order
//1.7
//11.8
//17.2
//2.3
//17.8
//45.2
//34.6
//54.7
//92.4
//23.5
//
//The tree pre-order
//23.5
//17.8
//2.3
//1.7
//17.2
//11.8
//92.4
//54.7
//34.6
//45.2
//
//The tree in order
//1.7
//2.3
//11.8
//17.2
//23.5
//34.6
//45.2
//92.4
//
//The tree post-order
//1.7
//11.8
//17.2
//2.3
//45.2
//34.6
//92.4
//23.5
//
//The tree pre-order
//23.5
//2.3
//1.7
//17.2
//11.8
//92.4
//34.6
//45.2
//
//The tree in order
//Alex
//Alice
//Connor
//Conor
//Fred
//Jason
//Karl
//Mark
//Mary
//William
//
//The tree post-order
//Alex
//Conor
//Connor
//Alice
//Mark
//Karl
//Jason
//William
//Mary
//Fred
//
//The tree pre-order
//Fred
//Alice
//Alex
//Connor
//Conor
//Mary
//Jason
//Karl
//Mark
//William
//
//The tree in order
//Alex
//Alice
//Connor
//Conor
//Fred
//Jason
//Mark
//William
//
//The tree post-order
//Alex
//Conor
//Connor
//Alice
//Mark
//Jason
//William
//Fred
//
//The tree pre-order
//Fred
//Alice
//Alex
//Connor
//Conor
//William
//Jason
//Mark