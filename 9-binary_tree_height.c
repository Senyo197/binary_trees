#include "binary_trees.h"

/**
*binary_tree_height - function that measures the height of a binary tree
*@tree: thr tree's height to be measured
*Return: measured height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
