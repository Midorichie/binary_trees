#include "binary_trees.h"

/**
 * binary_tree_is_root - It checks if a given node is a root
 * @node: A pointer to the node to check
 * Return: 1 if node is a root, else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
		binary_tree_is_root(node->left);
		binary_tree_is_root(node->right);
	}

	return (0);
}
