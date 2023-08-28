#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	/* create new node and fill it's data*/
	binary_tree_t *node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);
	node->left = node->right = NULL;

	/* set new_node at the correct position*/
	if (parent->left != NULL)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;
	return (node);
}
