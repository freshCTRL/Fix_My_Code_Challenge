#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * i_am_a_callaway - check the code for Holberton School students.
 * @head: parameter to the i_am_a_callaway function
 *
 * Return: void.
 */
void i_am_a_callaway(dlistint_t *head)
{
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
print_dlistint(head);
free_dlistint(head);
}
/**
 * call_me_back - check the code to call inside main.
 *
 * Return: void.
 */
void call_me_back(void)
{
dlistint_t *head;

head = NULL;
add_dnodeint_end(&head, 0);
add_dnodeint_end(&head, 1);
add_dnodeint_end(&head, 2);
add_dnodeint_end(&head, 3);
add_dnodeint_end(&head, 4);
add_dnodeint_end(&head, 98);
add_dnodeint_end(&head, 402);
add_dnodeint_end(&head, 1024);
print_dlistint(head);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 5);
print_dlistint(head);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
print_dlistint(head);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
print_dlistint(head);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
print_dlistint(head);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
print_dlistint(head);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
print_dlistint(head);
printf("-----------------\n");
delete_dnodeint_at_index(&head, 0);
print_dlistint(head);
i_am_a_callaway(head);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
call_me_back();
return (0);
}
