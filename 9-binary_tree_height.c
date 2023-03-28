#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:  a pointer to the root node
 * Return: size_t representing height, 0 on failure or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_size += binary_tree_height(tree->left);
	if (tree->right)
		right_size += binary_tree_height(tree->right);

	if (left_size > right_size)
		return (left_size);
	else
		return (right_size);
}
