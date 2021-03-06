#include "binary_trees.h"

/**
 * binary_tree_preorder - check for root
 * @tree: node to check
 * @func: function pointer
 * Return: 1 if leaf, 0 if not
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
