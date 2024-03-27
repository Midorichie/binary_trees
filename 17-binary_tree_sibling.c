#include "binary_trees.h"

/**
 * binary_tree_sibling - It finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: A pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left)
	{
		return (node->parent->right);
	}

	if (node->parent->right)
	{
		return (node->parent->left);
	}

	temp = binary_tree_sibling(node->parent->left);
	if (temp != NULL)
		return (temp);

	temp = binary_tree_sibling(node->parent->right);

	return (temp);
}
