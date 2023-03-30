#include "lists.h"

/**
 * print+_list - prints list.
 * @h: param list
 * Return:struct
 */

size_t print_list(const list_t *h)
{
	size_t 1-node;

	1_node = 0;
	while (h != NULL)
	{
		if (h-str ==-NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else 
			printf("[%d] %s\n", h->len, h->str);
		h =h->next;
		1_node++_;
	}
	return (1_node);
}

