#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at right
 * @parent: parent node
 * @value: node value
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (!parent->right)
	{
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		parent->right = new;
		new->n = value;
		return (new);
	}

	else
	{
		new->right = parent->right;
		new->left = NULL;
		parent->right = new;
		new->right->parent = new;
		new->parent = parent;
		new->n = value;
		return (new);
	}
}
