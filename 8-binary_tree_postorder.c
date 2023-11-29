#include "binary_trees.h"

/**
*binary_tree_postorder - The function that goes through a binary
* tree using post-order traversal
*@func: A function to call for each node
*@tree: The tree to be searched
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
