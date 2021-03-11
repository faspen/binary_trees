#include "binary_trees.h"

/**
 * binary_tree_depth - check for root
 * @tree: node to check
 * Return: 1 if leaf, 0 if not
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		i++;
		tree = tree->parent;
	}

	return (i);
}
