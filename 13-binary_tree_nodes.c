#include "binary_trees.h"

/**
 * binary_tree_is_root - check for root
 * @tree: node to check
 * Return: 1 if leaf, 0 if not
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
        return (0);

    if (tree->left || tree->right)
        return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
    else
        return (0);
}
