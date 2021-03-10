#include "binary_trees.h"

/**
 * binary_tree_uncle - find node's uncle
 * @node: node to check
 * Return: pointer to node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	node = node->parent;

	if (!node->parent || !node->parent->left || !node->parent->right)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
