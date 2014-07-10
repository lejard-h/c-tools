/*
** list_insert.c for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Fri Mar  7 15:39:47 2014 hadrien lejard
** Last update Thu Jul 10 13:44:59 2014 lejard_h
*/

#include <stdlib.h>
#include "list.h"

t_list		*list_insert_after(t_list *elem, void *data)
{
  t_list	*new;

  if (elem == NULL)
    list_error("Null element.");
  if ((new = malloc(sizeof(*new))) == NULL)
    list_error("malloc failed.");
  new->data = data;
  new->prev = elem;
  new->next = elem->next;
  if (elem->next)
    elem->next->prev = new;
  elem->next = new;
  return (new);
}

t_list		*list_insert_before(t_list **begin, t_list *elem, void *data)
{
  t_list	*new;

  if (elem == NULL)
    list_error("Null element.");
  if ((new = malloc(sizeof(*new))) == NULL)
    list_error("malloc failed.");
  new->data = data;
  new->prev = elem->prev;
  new->next = elem;
  if (elem->prev)
    elem->prev->next = new;
  else
    *begin = new;
  elem->prev = new;
  return (new);
}

t_list		*list_insert_elem_after(t_list *elem, t_list *after)
{
  if (elem == NULL)
    list_error("Null element.");
  if (elem->next)
    elem->next->prev = after;
  after->next = elem->next;
  after->prev = elem;
  elem->next = after;
  return (after);
}

t_list		*list_insert_elem_before(t_list **begin, t_list *elem,
					 t_list *before)
{
  if (elem == NULL)
    list_error("Null element.");
  before->prev = elem->prev;
  before->next = elem;
  if (elem->prev)
    elem->prev->next = before;
  else
    *begin = before;
  elem->prev = before;
  return (before);
}
