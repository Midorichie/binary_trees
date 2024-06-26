#include "binary_trees.h"

/**
 * binary_tree_size - It measures the size of a binary tree
 * @tree: A pointer to the root node of the
 * tree to measure the size
 * Return: The height or 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
