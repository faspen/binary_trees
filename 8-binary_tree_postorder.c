#include "binary_trees.h"

/**
 * binary_tree_postorder - check for root
 * @tree: node to check
 * @func: function pointer
 * Return: 1 if leaf, 0 if not
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
