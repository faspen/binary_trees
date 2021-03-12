#include "binary_trees.h"

/**
 * binary_tree_balance - check for root
 * @tree: node to check
 * Return: 1 if leaf, 0 if not
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int R, L;

	if (!tree)
		return (0);

	R = binary_tree_height(tree->right);
	L = binary_tree_height(tree->left);

	return (R - L);
}

/**
 * binary_tree_height - check for root
 * @node: node to check
 * Return: 1 if leaf, 0 if not
 */
size_t binary_tree_height(const binary_tree_t *node)
{
	size_t ld, rd;

	if (!node)
		return (0);
	ld = binary_tree_height(node->left);
	rd = binary_tree_height(node->right);

	if (ld > rd)
		return (ld + 1);
	return (rd + 1);
}
