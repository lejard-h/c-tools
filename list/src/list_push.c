/*
** list_append.c for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Thu Mar  6 21:13:05 2014 hadrien lejard
** Last update Thu Jul 10 13:45:04 2014 lejard_h
*/

#include <stdlib.h>
#include "list.h"

t_list		*list_push(t_list **begin, void *data)
{
  t_list	*new;

  if (begin == NULL)
    return (NULL);
  if ((new = malloc(sizeof(*new))) == NULL)
    list_error("malloc failed.");
  new->data = data;
  new->prev = NULL;
  if (*begin != NULL)
    (*begin)->prev = new;
  new->next = *begin;
  *begin = new;
  return (new);
}

t_list		*list_push_back(t_list **begin, void *data)
{
  t_list	*new;
  t_list	*tmp;

  if (begin == NULL)
    return (NULL);
  if ((new = malloc(sizeof(*new))) == NULL)
    list_error("malloc failed.");
  new->data = data;
  new->prev = NULL;
  new->next = NULL;
  if (*begin == NULL)
    *begin = new;
  else
    {
      tmp = *begin;
      while (tmp->next)
	tmp = tmp->next;
      tmp->next = new;
      new->prev = tmp;
    }
  return (new);
}
