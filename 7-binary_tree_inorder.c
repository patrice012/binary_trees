#include "binary_trees.h"

/**
 * print_number - Prints a number
 *
 * @n: Number to be printed
 */
void print_number(int n)
{
	printf("%d\n", n);
}


/**
 * binary_tree_inorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
