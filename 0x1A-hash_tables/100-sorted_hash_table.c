#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a hash table
 * @size: the size of the hash table
 * Return: a pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new_table;

	if (!size)
		return (NULL);
	new_table = malloc(sizeof(shash_table_t));
	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}

/**
 * shash_make_node - a function that creates a new node
 * @key: new node's key
 * @value: the new node's value
 * Return: a pointer to the new node
 */
shash_node_t *shash_make_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
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
	new_node->sprev = NULL;
	new_node->snext = NULL;
	return (new_node);
}

/**
 * add_to_sorted_list - add node to the rigth position by sorting it
 * @ht: the shash table
 * @node: the node to insert
 */
void add_to_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tp;

	if (!ht->shead && !ht->stail)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	tp = ht->shead;
	while (tp)
	{
		if (strcmp(node->key, tp->key) < 0)
		{
			node->snext = tp;
			node->sprev = tp->sprev;
			tp->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		tp = tp->snext;
	}
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_set - insert a new element to the shash table
 * @ht: the shash table
 * @key: the key to insert
 * @value: the value to insert
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	unsigned long int i;
	shash_node_t *tp;
	char *new_val;

	if (!ht || !ht->array || !value || !key || !strlen(key) || !ht->size)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[i];
	while (tp)
	{
		if (strcmp(tp->key, key) == 0)
		{
			new_val = strdup(value);
			if (!new_val)
				return (0);
			free(tp->value);
			tp->value = new_val;
			return (1);
		}
		tp = tp->next;
	}
	new_node = shash_make_node(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	add_to_sorted_list(ht, new_node);
	return (1);
}

/**
 * shash_table_get -  that retrieves a value associated with a key
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element, NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *tp;

	if (!ht || !ht->array || !ht->size || !key || !strlen(key))
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tp = ht->array[i];
	while (tp)
	{
		if (strcmp(tp->key, key) == 0)
			return (tp->value);
		tp = tp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints all the nodes
 * @ht: the hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tp;
	char f = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	tp = ht->shead;
	while (tp)
	{
		if (f == 1)
			printf(", ");
		printf("'%s': '%s'", tp->key, tp->value);
		f = 1;
		tp = tp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the hash table in reverse
 * @ht: the hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tp;
	char f = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	tp = ht->stail;
	while (tp)
	{
		if (f == 1)
			printf(", ");
		printf("'%s': '%s'", tp->key, tp->value);
		f = 1;
		tp = tp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delete the hash table
 * @ht: the hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next;

	if (!ht || !ht->array || !ht->size)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
