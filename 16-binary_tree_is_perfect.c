#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check for leaf
 * @node: node to check
 * Return: 1 if leaf, 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}

/**
 * binary_tree_height - measure height
 * @node: node
 * Return: size
 */
size_t binary_tree_height(const binary_tree_t *node)
{
	size_t ld, rd;

	if (!node || binary_tree_is_leaf(node))
		return (0);
	ld = binary_tree_height(node->left);
	rd = binary_tree_height(node->right);

	if (ld > rd)
		return (ld + 1);
	return (rd + 1);
}

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);
	if (!l || !r)
		return (0);

	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}
