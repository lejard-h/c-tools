/*
** list_swap_elem.c for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Thu Mar  6 21:35:02 2014 hadrien lejard
** Last update Thu Jul 10 13:44:17 2014 lejard_h
*/

#include <stdlib.h>
#include "list.h"

t_list		*list_swap_elem(t_list *a, t_list *b)
{
  void		*data;

  if (!a || !b)
    list_error("Null element");
  data = a->data;
  a->data = b->data;
  b->data = data;
  return (a);
}
