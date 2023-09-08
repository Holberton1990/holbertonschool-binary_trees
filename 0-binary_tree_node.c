#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Krijon një nyje të pemës binare
 * @parent: Pointer te nyja prind
 * @value: Vlera për të vendosur në nyje
 *
 * Return: Pointer te nyja e krijuar, ose NULL në rast të dështimit
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}

