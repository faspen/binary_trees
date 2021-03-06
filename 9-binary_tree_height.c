#include "binary_trees.h"

/**
 * binary_tree_height - check for root
 * @tree: node to check
 * Return: 1 if leaf, 0 if not
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t reight, leight;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	reight = binary_tree_height(tree->right);
	leight = binary_tree_height(tree->left);

	if (reight > leight)
		return (reight + 1);
	else
		return (leight + 1);
}
