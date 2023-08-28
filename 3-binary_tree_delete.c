#include "binary_trees.h"

void delete_tree(binary_tree_t *root);

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: tree is a pointer to the root node of the tree to delete
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
		delete_tree(tree);
}


/**
 * delete_tree - helper used to delete each node in the tree
 * @root: root node of binary tree
 */

void delete_tree(binary_tree_t *root)
{
	if (root->left)
		delete_tree(root->left);
	if (root->right)
		delete_tree(root->right);
	free(root);
}
