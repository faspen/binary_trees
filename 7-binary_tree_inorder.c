#include "binary_trees.h"

/**
 * binary_tree_inorder - check for root
 * @tree: node to check
 * @func: function pointer
 * Return: 1 if leaf, 0 if not
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
