#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a node to the left of the parent
 * @parent: parent node
 * @value: value of the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    // Check if the parent node is NULL
    if (parent == NULL)
    {
        return (NULL);
    }

    // Create a new node with the given value
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return (NULL); // Return NULL if creating the new node fails
    }

    // If the parent already has a left child
    if (parent->left != NULL)
    {
        // Make the new node's left child point to the current left child
        new_node->left = parent->left;
        // Update the parent pointer of the current left child to the new node
        parent->left->parent = new_node;
    }

    // Make the parent's left child point to the new node
    parent->left = new_node;

    // Return a pointer to the new node
    return (new_node);
}
