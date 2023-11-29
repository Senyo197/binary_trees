#include "binary_trees.h"

/**
*binary_tree_is_root - Checks if node has a root
*@node: Node to be checked
*Return: Node
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
