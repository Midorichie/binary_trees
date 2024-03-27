#include "binary_trees.h"

/**
 * binary_tree_height - It measures the height of a binary tree
 * @gift: A pointer to the root node of the tree to measure the height
 * Return: The height or 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
	{
		if (tree->left != NULL)
			return (left + 1);
	}
	else
	{
		if (tree->right != NULL)
			return (right + 1);
	}
	return (0);
}
