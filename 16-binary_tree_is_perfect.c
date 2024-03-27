#include "binary_trees.h"

/**
 * binary_tree_perfect - It tests if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * @d: The depth of the tree
 * Return: 1 or 0
 */

int binary_tree_perfect(const binary_tree_t *tree, int d)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == 0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_perfect(tree->left, d -  1) &&
			binary_tree_perfect(tree->right, d - 1));
}

/**
 * binary_tree_depth - It measures the depth of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 * the height
 * Return: The depth, else 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);

	if (tree->parent != NULL)
		return (depth + 1);

	return (0);
}

/**
 * binary_tree_is_perfect - It checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = binary_tree_depth(tree);

	return (binary_tree_perfect(tree, d));
}
