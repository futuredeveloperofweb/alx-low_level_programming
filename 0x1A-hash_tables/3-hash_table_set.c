#include "hash_tables.h"

/**
 * hash_node - a function that makes a node in the hash table
 * @key: the key of the node
 * @value: its value
 * Return: a node with key-value pair
 */
hash_node_t *hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (NULL);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key:  is the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node;
	hash_node_t *current;
	char *n_value;

	if (!ht || !ht->array || !ht->size || !key || strlen(key) == 0 || !value)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	current = ht->array[i];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			n_value = strdup(value);
			if (!n_value)
				return (0);
			free(current->value);
			current->value = n_value;
			return (1);
		}
		current = current->next;
	}
	new_node = hash_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
