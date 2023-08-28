#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: current node parent
 * @value: current node value
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (!value)
		return (NULL);

	binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
