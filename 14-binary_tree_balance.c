#include "binary_trees.h"

/**
*binary_tree_balance - function that measures the balance factor
* of a binary tree
*@tree: A pointer to the root node of the tree to measure the balance
*Return: The balance factor of the tree, 0 if tree is null
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	right_height = binary_tree_balance(tree->right);

	return (left_height - right_height);
}
