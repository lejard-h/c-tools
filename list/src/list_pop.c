/*
** list_pop.c for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Fri Mar  7 15:54:41 2014 hadrien lejard
** Last update Thu Jul 10 13:44:32 2014 lejard_h
*/

#include <stdlib.h>
#include "list.h"

t_list	*list_pop(t_list **begin)
{
  t_list	*pop;

  if (!begin)
    list_error("Null argument.");
  pop = *begin;
  if (pop)
    {
      (*begin)->prev = NULL;
      *begin = pop->next;
      pop->prev = NULL;
      pop->next = NULL;
    }
  return (pop);
}
