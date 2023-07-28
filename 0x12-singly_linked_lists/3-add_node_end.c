#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    if (head == NULL || str == NULL)
        return NULL;

    list_t *new_node;
    char *dup_str;
    int len;

    /* Create and allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    /* Duplicate the input string */
    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        free(new_node);
        return NULL;
    }

    /* Calculate the length of the duplicated string */
    len = strlen(str);

    /* Set the values for the new node */
    new_node->str = dup_str;
    new_node->len = len;
    new_node->next = NULL;

    /* If the list is empty, set the head to the new node */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Find the last node in the list */
        list_t *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }

        /* Update the 'next' pointer of the last node to point to the new node */
        current->next = new_node;
    }

    return new_node;
}

