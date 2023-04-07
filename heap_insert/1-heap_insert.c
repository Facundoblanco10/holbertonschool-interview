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
    heap_t *new_node;
    heap_t *current_node = *root;

    new_node = malloc(sizeof(heap_t));
    if (new_node == NULL)
        return (NULL);
    new_node->n = value;
    if (current_node == NULL)
    {
        new_node->parent = NULL;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
    }
}