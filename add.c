#include "monty.h"
/**
 * f_add-adds top two elements of the stack
 * @head:stack head
 * @counter:line_number
 * Return:no return
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprint(stderr "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next;
	h->next->n = aux;
	*head = h->next;
	free(h);
}