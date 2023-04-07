#include "binary_trees.h"

/**
 * heap_insert - function that inserts a value into a Max Binary Heap:
 * @root: is a double pointer to the root node of the Heap
 * @value: is the value to store in the node to be inserted
 *
 * Return: a pointer to the inserted node, or NULL on failure
 */

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new_node, *current;

	new_node = malloc(sizeof(heap_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (*root == NULL)
	{
		*root = new_node;
		return (new_node);
	}
	current = *root;
	while (current->left != NULL && current->right != NULL)
	{
		if (current->left != NULL && current->right != NULL)
			current = current->left;
		else if (current->left != NULL)
			current = current->right;
	}

	new_node->parent = current;
	if (current->left == NULL)
		current->left = new_node;
	else
		current->right = new_node;

	while (new_node->parent != NULL && new_node->n > new_node->parent->n)
	{
		swap_nodes(new_node->n, new_node->parent->n);
		new_node = new_node->parent;
	}

	return (new_node);
}

/**
 * swap_nodes - Swap values in the nodes
 * @n1: node value1
 * @n2: node value2
 */
void swap_nodes(int n1, int n2)
{
	int temp = n1;

	n1 = n2;
	n2 = temp;
}
