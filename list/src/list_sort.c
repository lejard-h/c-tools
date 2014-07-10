/*
** list_sort.c for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Fri Mar  7 16:00:48 2014 hadrien lejard
** Last update Thu Jul 10 13:45:09 2014 lejard_h
*/

#include <stdlib.h>
#include "list.h"

static void	sort(t_list **list, t_list *elem,
		     Bool (*comp_func)(void *, void *))
{
  t_list	*current;

  if (*list)
    {
      current = *list;
      while (current->next)
	{
	  if (comp_func(current->data, elem->data))
	    {
	      list_insert_elem_before(list, current, elem);
	      return ;
	    }
	  current = current->next;
	}
      if (comp_func(current->data, elem->data))
	  list_insert_elem_before(list, current, elem);
      else
	list_insert_elem_after(current, elem);
    }
  else
    *list = elem;
}

t_list		*list_sort(t_list **begin, Bool (*comp_func)(void *, void *))
{
  t_list	*newList;
  t_list	*current;

  newList = NULL;
  while ((current = list_pop(begin)))
    sort(&newList, current, comp_func);
  *begin = newList;
  return (newList);
}
