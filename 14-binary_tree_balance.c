#include "binary_trees.h"

/**
 * binary_tree_height - It measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: The height, else 0
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
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}

	return (0);
}

/**
 * binary_tree_balance - It measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure
 * the balance factore of a binary tree
 * Return: The node count, else 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
