#ifndef BST_H
#define BST_H
/*
Structure: Node

This is structure of a node in binary search tree.

- int key | data of the node
- Node* left | pointer to the left child of this node
- Node* right | pointer to the right child of this node
*/
struct Node
{
	int key;
	Node* left;
	Node* right;
};

class BST
{
private:
	Node* root;
	int count;
	/*
	Function: inorder

	Prints inorder Traversal of the tree.
	
	Parameters:

	r - root of the tree (a pointer of a Node structure).
	
	Returns:

	nothing (void) 
	
	See Also:
	
	<preorder>
	<postorder>		
	*/	
	void inorder(Node* r);
	/*
	Function: preorder

	Prints preorder Traversal of the tree.
	
	Parameters:

	r - root of the tree (a pointer of a Node structure).
	
	Returns:

	nothing (void).

	See Also:
	
	<inorder>
	<postorder> 	
	*/
	void preorder(Node* r);
	/*
	Function: postorder

	Prints postorder Traversal of the tree.
	
	Parameters:

	r - root of the tree (a pointer of a Node structure).
	
	Returns:

	nothing (void). 

	See Also:
	
	<inorder>
	<preorder> 	
	*/
	void postorder(Node* r);

public:
	/*
	Constructor: BST

	Initializes the tree.
	*/
	BST();

	/*
	Function: insert

	Inserts a node into the tree.
	
	Parameters:

	key - the key in the node to be inserted.
	
	Returns:

 	bool
	- true if inserted.
	- false if not inserted. 

	See Also:
	
	<search>
	<remove> 	
	*/
	bool insert(int key);
	/*
	Function: search

	Searches a node into the tree.
	
	Parameters:

	key - the key of the node to be searched.
	
	Returns:

 	bool
	- true if found.
	- false if not found. 

	See Also:
	
	<insert>
	<remove> 	
	*/
	bool search(int key);
	/*
	Function: remove

	removes a node into the tree.
	
	Parameters:

	key - the key of the node to be removed.
	
	Returns:

 	bool
	- true if removed.
	- false if not removed. 

	See Also:
	
	<insert>
	<search> 	
	*/
	bool remove(int key);
	void inorder();
	void preorder();
	void postorder();
	/*
	Function: size

	Gives number of nodes in the whole tree.
	
	Parameters:

	void
	
	Returns:

 	int, size or number of nodes in the tree.
	
	See Also:
	<insert>
	<search>
	<remove> 	
	*/
	int size();
};

//perl NaturalDocs -i project_class/src -o HTML project_class/doc -p project_class/config


