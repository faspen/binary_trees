#include "binary_trees.h"

/**
 * binary_tree_is_root - check for root
 * @tree: node to check
 * Return: 1 if leaf, 0 if not
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
        return (0);

    return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
