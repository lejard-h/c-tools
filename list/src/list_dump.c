/*
** list_dump.c for  in /home/lejard_h/my_lib_c/list
**
** Made by hadrien lejard
** Login   <lejard_h@epitech.net>
**
** Started on  Thu Mar  6 21:25:05 2014 hadrien lejard
** Last update Thu Jul 10 13:44:43 2014 lejard_h
*/

#include <stdlib.h>
#include "list.h"

void		list_foreach_data(t_list *begin, void (*func)(void *))
{
  t_list	*tmp;

  tmp = begin;
  while (tmp && func)
    {
      func(tmp->data);
      tmp = tmp->next;
      if (tmp == begin)
	return ;
    }
}

void		list_foreach(t_list *begin, void (*func)(t_list *))
{
  t_list	*tmp;

  tmp = begin;
  while (tmp && func)
    {
      func(tmp);
      tmp = tmp->next;
      if (tmp == begin)
	return ;
    }
}
