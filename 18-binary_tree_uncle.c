#include "binary_trees.h"

/**
*binary_tree_uncle - function that finds the sibling of a node
*@node: A pointer to the node to find the sibling
*Return: A pointer to the sibling node or null is node is null
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left != NULL &&
	 node->parent->parent->right != NULL)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else if (node->parent->parent->right == node)
			return (node->parent->parent->left);
	}
	return (NULL);
}
