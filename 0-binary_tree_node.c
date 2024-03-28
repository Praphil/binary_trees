#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    // Allocate memory for the new node
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    
    // Check if memory allocation was successful
    if (new_node == NULL)
    {
        return (NULL); // Return NULL if malloc failed
    }
    
    // Initialize the fields of the new node
    new_node->n = value;        // Set the value of the node
    new_node->parent = parent;  // Set the parent of the node
    new_node->left = NULL;      // Initialize the left child pointer
    new_node->right = NULL;     // Initialize the right child pointer
    
    // Return a pointer to the new node
    return (new_node);
}
