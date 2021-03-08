#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node on left
 * @parent: parent node
 * @value: node value
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	if (!parent->left)
	{
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		new->n = value;
		parent->left = new;
		return (new);
	}

	else
	{
		new->left = parent->left;
		new->right = NULL;
		parent->left = new;
		new->left->parent = new;
		new->parent = parent;
		new->n = value;
		return (new);
	}
}
