#include "binary_trees.h"

/**
 * binary_tree_depth - It measures the depth of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: The depth or 0
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
