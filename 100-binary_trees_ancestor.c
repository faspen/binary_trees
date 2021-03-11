#include "binary_trees.h"

/**
 * binary_trees_ancestor - check for root
 * @first: node to check
 * @second: node
 * Return: 1 if leaf, 0 if not
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *common_root;

	if (!first || !second)
		return (NULL);

	common_root = (binary_tree_t *)second;

	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		first = first->parent;
		second = common_root;

	}
	return (NULL);
}
