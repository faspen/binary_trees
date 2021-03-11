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
    
    R = tree_balance(tree->right);
    L = tree_balance(tree->left);

    return (R - L);
}

/**
 * tree_balance - check for root
 * @tree: node to check
 * Return: 1 if leaf, 0 if not
 */
int tree_balance(const binary_tree_t *tree)
{
    int R, L;

    R = tree_balance(tree->right);
    L = tree_balance(tree->left);

    if (R > L)
        return (R);
    else
        return (L);
}
