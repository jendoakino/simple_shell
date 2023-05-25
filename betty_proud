
#include <stdlib.h>

/**
*free_list- frees  linked list
*@head:of list_t list to be freed
*/

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
