#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a balanced tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the binary tree
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;

	return (l > r ? l : r);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);

	left = (int)binary_tree_height_b(tree->left);
	right = (int)binary_tree_height_b(tree->right);

	return (left - right);
}