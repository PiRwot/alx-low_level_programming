#include "lists.h"

/**
* pop_listsint - a function that deletes the head node of the list
* and returns the head node's data n
* @head: A pointer to listin_t structure.
* Return: The head node's data from the deleted element
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL) /* account for no linked list */
		return (0);

	tmp = *head;

	data = tmp->n; /* save data to return later */

	*head = tmp->next; /* link head to next node */
	free(tmp);

	return (data);

}
