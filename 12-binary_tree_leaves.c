#include "binary_trees.h"

/**
 * binary_tree_leaves - It measures the leaves of a binary tree
 * @tree: A pointer to the root node of the tree to measure the leaves
 * Return: The leaves counts, else 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (left + right);
}
