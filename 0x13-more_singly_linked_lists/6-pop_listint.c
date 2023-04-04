#include "lists.h"

/**
* pop_listsint - a function that deletes the head node of the list
* and returns the head node's data n
* @head: A pointer to listin_t structure.
* Return: The head node's data from the deleted element
*/

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if(*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
