#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node
 * @parent: is a pointer to the node to insert the right-child
 * @value: is the value to store in the new node
 * Description: If parent already has a right-child
 * Return: a pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
