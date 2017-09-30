#include <stdio.h>
#include <stdlib.h>  /* free() */

#include <node.h>
#include <list.h>

void
print_list(struct node *head)
{
	if (head)
	{
		struct node *p = head;

		do {
			printf("%d\n", p->datum);
			p = p->b;
		} while (p != head);
	}
}

void
free_list(struct node *head)
{
	head->a->b = NULL;
	while (head)
	{
		struct node *tmp = head->b;
		head->a = head->b = NULL;
		free(head);
		head = tmp;
	}
}
