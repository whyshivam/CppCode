// C++ program to check if binary tree 
// is subtree of another binary tree 
#include<bits/stdc++.h> 
using namespace std; 

/* A binary tree TreeNode has data, 
left child and right child */
class TreeNode 
{ 
	public: 
	int data; 
	TreeNode* left; 
	TreeNode* right; 
}; 

/* A utility function to check 
whether trees with roots as root1 and 
root2 are identical or not */
int countNode(TreeNode* tree){
	if(tree==NULL)
	return 0;
	else{
		return (1+countNode(tree->left)+countNode(tree->right));
	}
}
bool areIdentical(TreeNode * root1, TreeNode *root2) 
{ 
	/* base cases */
	if (root1 == NULL && root2 == NULL) 
		return true; 

	if (root1 == NULL || root2 == NULL) 
		return false; 

	/* Check if the data of both roots is 
	same and data of left and right 
	subtrees are also same */
	return (root1->data == root2->data && 
			areIdentical(root1->left, root2->left) && 
			areIdentical(root1->right, root2->right) ); 
} 


/* This function returns true if S 
is a subtree of T, otherwise false */
bool isSubtree(TreeNode *T, TreeNode *S) 
{ 
	/* base cases */
	if (S == NULL) 
		return true; 

	if (T == NULL) 
		return false; 

	/* Check the tree with root as current TreeNode */
	if (areIdentical(T, S)) 
		return true; 

	/* If the tree with root as current 
	TreeNode doesn't match then try left 
	and right subtrees one by one */
	return isSubtree(T->left, S) || 
		isSubtree(T->right, S); 
} 


/* Helper function that allocates 
a new TreeNode with the given data 
and NULL left and right pointers. */

TreeNode* newTreeNode(int data) 
{ 
	TreeNode* Node = new TreeNode(); 
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 
	return(Node); 
} 
int CountIfSubtree( TreeNode* tree1,  TreeNode* tree2){
	if(isSubtree(tree1,tree2)){
		return (countNode(tree2));
	}
	else{
		return -1;
	}
}
/* Driver code*/
int main() 
{ 
	// TREE 1 
	/* Construct the following tree 
			26 
			/ \ 
		10 3 
		/ \ \ 
	4 6 3 
	\ 
		30 
	*/
	TreeNode *T = newTreeNode(26); 
	T->right		 = newTreeNode(3); 
	T->right->right = newTreeNode(3); 
	T->left		 = newTreeNode(10); 
	T->left->left	 = newTreeNode(4); 
	T->left->left->right = newTreeNode(30); 
	T->left->right	 = newTreeNode(6); 

	// TREE 2 
	/* Construct the following tree 
		10 
		/ \ 
	4 6 
	\ 
		30 
	*/
	TreeNode *S = newTreeNode(10); 
	S->right	 = newTreeNode(6); 
	S->left	 = newTreeNode(4); 
	S->left->right = newTreeNode(30); 


	if (isSubtree(T, S)) 
		cout << countNode(S); 
	else
		cout << "Tree 2 is not a subtree of Tree 1"; 

	return 0; 
} 

// This code is contributed by rathbhupendra 

