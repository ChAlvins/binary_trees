#include "binary_trees.h"

/**
 * binary_tree_balance - A function that measures the balance factor of a
 * binary tree
 * @tree: Pointer to root node of the tree to measure balance factor.
 * Return: (int) The balance factor of the tree
 * return 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * to measure the height
 * Return: (size_t) height, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	left_size += 1 + binary_tree_height(tree->left);
	right_size += 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);

	return (right_size);
}
