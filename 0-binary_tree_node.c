#include <stdio.h>
#include "binary_trees.h"

/**
  * binary_tree_node - function creating a binary tree node
  * @parent: pointer to the parent node of new node created
  * @value: integer value of new node
  * Return: returns a pointer to the newly created new node on success
  *         or NULL on failure
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = malloc(sizeof(new_node));
	if (new_node->left == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->right = malloc(sizeof(new_node));
	if (new_node->right == NULL)
	{
		free(new_node->left);
		free(new_node);
		return (NULL);
	}
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
