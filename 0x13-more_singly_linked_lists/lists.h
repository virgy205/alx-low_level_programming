Lists.h
#ifdefLISTS_H
#defineLISTS_H

#include<stdio.h>
#include<stdlib.h>

/**
*struct listint_s-singly linked list
*@n:integer
@next:points to the node
*
*Desprition:singly linked list node structure
*for alx project
*/
typedef struct listint_s
{
     int n;
     struct listint_s*next
}listint_s
size_t print_listint(const list_t*h);
size_t listint_len(constlist_t*h);
listint_t *add_nodeint(listint_t**head, const intn);
listint_t*add_nodeint_end(listint_t**head,constint n);

void free_listint(listint_t*head);
void free_listint2(listint_t**head);

int pop_listint(listint_t**head);

listint_t *get_nodeint_at_index(listint_t**head,unsigngned int index);
int sum_listint(listint_t*head);
listint_t *get_nodeint_at_index(listint_t **head,unsingned int idx,int n);

int delete_nodeint_at_index(listint_t **head,unsined int index);
listint_t*reverse _listint(listint_t**head);
size_t print_listint_safe(const listint_t*head);
size_tfree_listint_safe(listint_t**h);
listint_t*find_listint_loop(listint_t*head);
#endif

