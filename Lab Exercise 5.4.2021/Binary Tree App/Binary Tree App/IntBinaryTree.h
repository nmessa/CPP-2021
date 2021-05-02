//Class definition file IntBinaryTree class
//Author: nmessa
//Date: 5.15.2013

#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

class IntBinaryTree
{
private:
	struct TreeNode
	{
		int value;
		TreeNode *left;
		TreeNode *right;
	};

	TreeNode *root;
	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(int, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *);
	void displayPreOrder(TreeNode *);
	void displayPostOrder(TreeNode *);

	//Added functions
	bool isLeaf(TreeNode *);  //This function is called by private member functions displayInOrder, displayPreOrder,
								// and displayPostOrder
	int sumTree(TreeNode *);
	int treeCount(TreeNode *);

public:
	IntBinaryTree();		// Constructor
	~IntBinaryTree();	// Destructor
	void insertNode(int);
	bool searchNode(int);
	void remove(int);
	void displayInOrder();
	void displayPreOrder();
	void displayPostOrder();

	//Added functions
	int sumTree();
	int treeCount();
};

#endif