#include "lists.h"
/**
 * insert_dnodeint_at_index - function for insert node in an index selected.
 * @h: beginning of the list.
 * @idx: Number the element to search in the list.
 * @n: data an agree in the new node.
 * Return: pointer the element added.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = NULL, *copy = NULL;
    unsigned int cnt_list = 0;

    copy = *h;
    if (idx == 0)
    {
        copy = add_dnodeint(h, n);
        return (copy);
    }
    if (!copy || !n)
        return (NULL);
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    new_node->n = n;
    while (copy)
    {
        if (idx == cnt_list)
        {
            new_node->prev = copy->prev;
            new_node->next = copy;
            copy = new_node;
            copy = copy->prev;
            copy->next = new_node;
            copy = *h;
            return (copy);
        }
        if (!copy->next && idx == cnt_list + 1)
            return (free(new_node), add_dnodeint_end(h, n));
        copy = copy->next;
        cnt_list++;
    }
    free(new_node);
    return (NULL);
}
